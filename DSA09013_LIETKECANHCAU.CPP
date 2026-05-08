#include <bits/stdc++.h>
using namespace std;
int n, m;
vector<int> ke[1005];
bool visited[1005];

bool bfs(int start, int target, int x, int y){
    memset(visited, false, sizeof(visited));
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while(!q.empty()){
        int u = q.front(); q.pop();
        for(int v : ke[u]){
            if(u == x && v == y || u == y && v == x) continue;
            if(!visited[v]){
                q.push(v);
                visited[v] = true;
            }
        }
    }
    return visited[target];
}
void duyetcau(){
    
    vector<pair<int,int>> res;

    for(int u = 1; u <= n; u++){
        for(int x : ke[u]){
            if(u < x){
                if(!bfs(u,x,u,x)){
                    res.push_back({u,x});
                }
            }
        }
    }
    sort(res.begin(), res.end());
    if(res.empty()) cout << 0 ;
    else{
      for(auto v : res){
        cout << v.first << " " << v.second<< " ";
      }
    }
    cout << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> m;
        for(int i = 1; i <= n; i++){
            ke[i].clear();
            visited[i] = false;
        }
        for(int i = 1; i <= n; i++){
            int u, v; cin >> u >> v;
            ke[u].push_back(v);
            ke[v].push_back(u);
        }
        duyetcau();
    }
    return 0;
}