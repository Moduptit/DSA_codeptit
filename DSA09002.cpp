#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    cin.ignore();
    vector<vector<int>> ke(n+1);
    for(int i = 1; i <= n; i ++){
        string s;
        getline(cin, s);
        stringstream ss(s);
        int x;
        while (ss >> x){
            ke[i].push_back(x);
        }
    }
    for(int u = 1; u <= n; u++){
        for(int v : ke[u]){
            if(u < v) cout << u << " " << v << endl;
        }
        
    }

    return 0;
}