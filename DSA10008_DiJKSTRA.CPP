#include <bits/stdc++.h>
using namespace std;

int n, m, start, D[1005];
vector<pair<int,int>> List[1005];
priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> q;

void Dijkstra(int start){
    int i, u, v;
    for(int i = 1; i <= n; i++) D[i] = 1e9;
    D[start] = 0;
    while(!q.empty()) q.pop();
    q.push({0, start});
    while(!q.empty()){
        u = q.top().second; q.pop();
        for(int i = 0; i < List[u].size(); i++){
            v = List[u][i].second;
            int d_u_v = List[u][i].first;
            if((D[u] + d_u_v )< D[v]){
                D[v] = D[u] + d_u_v;
                q.push({D[v],v});
            }
        }
    }
    for(int i = 1; i <= n; i++) cout << D[i] << " ";
    cout << endl;
}

int main(){ 
    int t, i, u, v, w;
    cin >> t;
    while(t--){
        cin >> n >> m >> start;
        for(int i = 0; i <= n; i++) List[i].clear();
        for(int i = 1; i <= m; i++) {
            cin >> u >> v >> w;
            List[u].push_back({w,v});
            List[v].push_back({w,u});
        }
        Dijkstra(start);
    }
    return 0;
}