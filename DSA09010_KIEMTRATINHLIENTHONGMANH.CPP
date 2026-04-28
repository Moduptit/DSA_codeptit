#include <bits/stdc++.h>
using namespace std;
int t, n , m;
vector<int> ke[1005];
bool visited[1005];

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

int main(){
    cin >> t;
    while(t--){
        cin >> n >> m;
        for(int i = 1; i <= n; i++){
            ke[i].clear();
            
        }
        for(int i = 1; i <= m; i++ ){
            int u, v; cin >> u >> v;
            ke[u].push_back(v);
        }
        bool ok = true;
        for(int i = 1; i <= n; i++){
            memset(visited,false, sizeof(visited));

            bfs(i);
            for(int j = 1; j <= n; j++){
                if(!visited[j]){
                    ok = false;
                    break;
                }
            }
            if(!ok) break;
        }
        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }
    
    return 0;
}