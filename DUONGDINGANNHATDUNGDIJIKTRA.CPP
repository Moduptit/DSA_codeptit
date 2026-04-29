#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MAXN = 1e18;

int main(){
    int n , m; cin >> n >> m;
    
    vector<vector<pair<int,int>>> ke(n+1);
    for(int i = 0 ; i < m; i++){
        int u, c, v;
        cin >> u >> c >> v;
        ke[u].push_back({v,c});
        ke[v].push_back({u,c});
    }

    vector<ll> disc(n+1, MAXN);
    vector<ll> path(n+1, 0);

    priority_queue<pair<ll,int>, vector<pair<ll,int>>, greater<>> pq;

    disc[1] = 0;
    path[1] = 1;
    pq.push({0,1});
    while(!pq.empty()){
        auto [d, u] = pq.top(); pq.pop();
        if(d > disc[u]) continue;
        for(auto [v, w] : ke [u]){
            if(disc[v] > disc[u] + w){
                disc[v] = disc[u] + w;
                path[v] = path[u];
                pq.push({disc[v], v});
            }
            else if( disc [v] == disc [u] + w){
                path[v] += path[u];
            }
        }
    }
    cout << disc[n] << " " << path [n];
    return 0;

}