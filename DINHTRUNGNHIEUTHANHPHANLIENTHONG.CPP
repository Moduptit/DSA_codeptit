#include <bits/stdc++.h>
using namespace std;
vector<int> ke[100005];
bool visited[100005];

int bfs(int start){
    queue<int> q;
    q.push(start);
    visited [start] = true;
    int cnt = 1;
    while(!q.empty()){
        int u = q.front(); q.pop();
        for(int v : ke[u]){
            if(!visited[v]) {
                visited[v] = true;
                q.push(u);
                cnt ++;
            }
        }
    }
    return cnt;
}
int main(){
    int n, m; cin >> n >> m;
    for(int i = 1; i <= n; i++){
        ke[i].clear();
        visited[i]= false;
    }
    for(int i = 0; i < m; i++){
        int u, v; cin >> u >> v;
        ke[u].push_back(v);
        ke[v].push_back(u);
    }
    memset(visited, false, sizeof(visited));
    int mem1 = bfs(1);

    int MAXN = 0;
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            int mem = bfs(i);
            MAXN = max(MAXN, mem);
        }
    }
    if(MAXN == 0) cout << mem1;
    else cout << mem1 + MAXN << endl;
    return 0;
}