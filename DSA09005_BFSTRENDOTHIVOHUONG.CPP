#include <bits/stdc++.h>
using namespace std;

vector<int> adj[1005];
bool visited[1005];

void bfs(int start){
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while(!q.empty()){
        int u = q.front(); q.pop();
        cout << u << " ";

        for(int v : adj[u]){
            if(!visited[v]){
                visited[v] = true;
                q.push(v);
            }
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        int n, m, start;
        cin >> n >> m >> start;

        for(int i = 1; i <= n; i++){
            adj[i].clear();
            visited[i] = false;
        }

        for(int i = 1; i <= m; i++){
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u); 
        }

        bfs(start);
        cout << endl;
    }

    return 0;
}