#include <bits/stdc++.h>
using namespace std;
vector<int> ke[1005];
bool visited[1005];
int n, m;

int bfs(int start, int blocked ){
    queue<int> q;
    q.push(start);
    visited[start] = true;
    
    int cnt = 1;

    while(!q.empty()){
        int u = q.front(); q.pop();
        for(int v : ke[u]){
            if (!visited[v] && v != blocked){
                visited[v] = true;
                q.push(v);
                ++cnt;
            }
        }
    } 
    return cnt; 
}
void duyettru(){
    bool ok = false;
    for(int u  = 1; u <= n; u++){

        memset(visited, false, sizeof(visited));
        
        int start = -1;
        for(int i = 1; i <= n; i++){
            if(i != u) {
                start = i;
                break;
            }
        }
        if(start == -1) break;

        int cnt = bfs(start,u);

        if(cnt != n - 1){
            cout << u << " ";
            ok = true;
        }
    }
    if(!ok) cout << 0;
    cout << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> m;
        for(int i = 1; i <= n; i++){
            ke[i].clear();
            visited[i] = false;
        }

        for(int i = 0; i < m; i++){
            int u, v; cin >> u >> v;
            ke[u].push_back(v);
            ke[v].push_back(u);
        }
        duyettru();
    }
    return 0;
}