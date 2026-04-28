#include <bits/stdc++.h>
using namespace std;
int n, m;
vector<pair<int,int>> edge(m+1);
vector<bool> visited;
vector<vector<int>> ke(n+1);


int main(){
    int T; cin >> T;
    while(T--){
         cin >> n >> m;
        
        for(int i = 1; i <= m; i++){
            cin >> edge[i].first >> edge[i].second;
        }
    }
    return 0;
}