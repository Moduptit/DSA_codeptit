#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    cin.ignore();
    vector<vector<int>> ke(n+1);
    //nhap
    for(int i = 1; i<= n; i++){
        string s; getline(cin,s);
        stringstream ss(s);
        int x;
        while(ss >> x){
            ke[i].push_back(x);
        }
    }
    //solve:
    vector<vector<int>> a(n+1,vector<int>((n+1), 0));
    for(int i = 1; i <= n; i++){
        for(int v : ke[i]){
            if(v >=1 && v <= n){
                a[i][v] = 1;
                a[v][i] = 1;
            }
        }
    }
    for(int i = 1; i<= n; i++){
        for(int j = 1; j <= n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}