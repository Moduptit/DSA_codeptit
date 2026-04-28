#include <bits/stdc++.h>
using namespace std;

vector<int> ke[1005];
bool visited[1005];

bool bfs(int s, int t){
    queue<int> q;
    vector<int> parent(1005, -1);

    q.push(s);
    visited[s] = true;

    while(!q.empty()){
        int v = q.front(); 
        q.pop();

        for(int x : ke[v]){
            if(!visited[x]){
                visited[x] = true;
                parent[x] = v;
                q.push(x);
            }
        }
    }

    if(!visited[t]) return false;

    vector<int> path;
    int cur = t;
    while(cur != -1){
        path.push_back(cur);
        cur = parent[cur];
    }
    reverse(path.begin(), path.end());

    for(int u : path) cout << u << " ";
    return true;
}

int main(){
    int T; cin >> T;
    while(T--){
        int n, m, s, t;
        cin >> n >> m >> s >> t;

        for(int i = 1; i <= n; i++){
            ke[i].clear();
            visited[i] = false;
        }

        for(int i = 1; i <= m; i++){
            int u, v; cin >> u >> v;
            ke[u].push_back(v);

        }

        if(!bfs(s, t)) cout << -1;
        cout << endl;
    }
    return 0;
}