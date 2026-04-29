#include <bits/stdc++.h>
using namespace std;
vector<int> ke[10005], kedao[10005];
bool visited[10005];
stack<int> st;

void dfs1(int u){
    visited[u] = true;
    for(int v : ke[u]){
        if(!visited[v]){
            dfs1(v);
        }
    }
    st.push(u);
}
void dfs2(int u){
    visited[u] = true;
    for(int v : kedao[u]){
        if(!visited[v]){
            dfs2(v);
        }
    }
}
int main(){
	int t, n, m;
    cin >> t;
    while(t--){
        cin >> n >> m;
        for(int i = 1; i <= 10000; i++){
            ke[i].clear();
            kedao[i].clear();
            visited[i] = false;
        }
        while(!st.empty()) st.pop();

        for(int i = 0; i < m; i++){
            int u, v;
            cin >> u >> v;
            ke[u].push_back(v);
            kedao[v].push_back(u);
        }
        for(int i = 1; i <= n; i++){
            if(!visited[i]) dfs1(i);
        }
        memset(visited, false, sizeof(visited));
        int cnt = 0;
        while(!st.empty()){
            int u = st.top(); st.pop();
            if(!visited[u]){
                cnt ++;
                dfs2(u);
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
