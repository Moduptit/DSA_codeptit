#include <bits/stdc++.h>
using namespace std;

vector<int> path;
bool visited[1005];
vector<pair<int,int>> edge;

bool dfs(int s, int t){
    visited[s] = true;
    path.push_back(s);

    if(s == t){
        for(int v : path){
            cout << v << " ";
        }
        cout << endl;
        return true;
    }

    for(auto e : edge){
        int x = e.first;
        int y = e.second;

        if(x == s && !visited[y]){
            if(dfs(y,t)) return true;
        }
    }
    path.pop_back();
    return false;

}

int main(){
    int T; cin >> T;
    while (T--){
        int n, m, s, t;
        cin >> n >> m >> s >> t;
        path.clear();
        edge.resize(m);
        edge.clear();
        for(int i = 1; i<= m; i++){
            int u, v;
            cin >> u >> v;
            edge.push_back({u,v});
        }
        memset(visited, false, sizeof(visited));

        if(!dfs(s,t)){
            cout << -1 << endl;
        }

    }

    return 0;
}