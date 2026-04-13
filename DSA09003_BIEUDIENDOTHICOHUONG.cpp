#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        vector<pair<int,int>> edge(m+1);
        for(int i = 1; i <= m; i++){
            cin >> edge[i].first >> edge[i].second;
        }
        vector<vector<int>> ke(n+1);
        for(auto e : edge){
            int u = e.first;
            int v = e.second;

            ke[u].push_back(v);
        }
        for(int i = 1; i <= n; i++){
            cout << i << ": ";
            for(int x : ke[i]) cout << x << " ";
            cout << endl;
        }
    }

    return 0;
}