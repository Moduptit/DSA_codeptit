#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> edge;
bool visited[1005];

void dfs(int u){

    visited[u] = true;
    cout << u << " ";

    for(auto e : edge){
        int x = e.first;
        int y = e.second;

        if(x == u && !visited[y]){
            dfs(y);
        }
        else if(y == u && !visited[x]){
            dfs(x);
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        int n, m, start;
        cin >> n >> m >> start;

        edge.clear();

        for(int i = 1; i <= m; i++){
            int u, v;
            cin >> u >> v;
            edge.push_back({u, v});
        }

        memset(visited, false, sizeof(visited));

        dfs(start);
        cout << endl;
    }

    return 0;
}