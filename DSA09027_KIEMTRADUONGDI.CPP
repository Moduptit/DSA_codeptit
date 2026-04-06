#include <bits/stdc++.h>
using namespace std;

vector<int> adj[1005];
bool visited[1005];
int comp[1005];
int n, m;

void dfs(int u, int id){
    visited[u] = true;
    comp[u] = id;

    for(int v : adj[u]){
        if(!visited[v]){
            dfs(v, id);
        }
    }
}

int main(){
    int T; cin >> T;
    while(T--){
        cin >> n >> m;


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

        
        int id = 0;
        for(int i = 1; i <= n; i++){
            if(!visited[i]){
                id++;
                dfs(i, id);
            }
        }

        int Q; cin >> Q;
        while(Q--){
            int x, y;
            cin >> x >> y;

            if(comp[x] == comp[y])
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}