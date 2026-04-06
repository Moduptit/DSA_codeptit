#include <bits/stdc++.h>
using namespace std;

vector<int> adj[1005];
bool visited[1005];

void dfs(int u){
    visited[u] = true;
    cout << u << " ";

    for(int v : adj[u]){
        if(!visited[v]){
            dfs(v);
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
        }

        dfs(start);
        cout << endl;
    }

    return 0;
}