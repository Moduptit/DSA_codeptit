#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        //nhap
        int n, m; cin >> n >> m;
        vector<pair<int,int>> edge(m+1);
        for(int i = 1; i <= m; i++){
            cin >> edge[i].first >> edge[i].second;
        }

        // solve
        vector<vector<int>> ke(n+1);
        for(auto e : edge){
            int u = e.first, v = e.second;

            ke[u].push_back(v);
            ke[v].push_back(u);
        }
        for(int i = 1; i <= n; i++){
            cout << i << ": ";
            for(int x : ke[i]) cout << x << " ";
            cout << endl; 
        }

    }
    return 0;
}