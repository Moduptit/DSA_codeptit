#include <bits/stdc++.h>
using namespace std;
int t, n, m;
bool visited[1005];
vector<int> ke[1005];
void bfs(int start){
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while(!q.empty()){
        int u = q.front(); q.pop();

        for(int v : ke[u]){
            if(!visited[v]){
                visited[v] = true;
                q.push(v);
            }
        }
    }
}
void soTPLT(){
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            ++cnt;
            bfs(i);
        }
    }
    cout << cnt << endl;
}

int main(){
    cin >> t;
    while(t--){
        cin >> n >> m;
        for(int i = 1; i <= n; i++){
            ke[i].clear();
            visited[i] = false;
        }
        for(int i = 1; i <= m; i++){
            int u, v; cin >> u >> v;
            ke[u].push_back(v);
            ke[v].push_back(u);
        }
        soTPLT();

    }
    return 0;
}