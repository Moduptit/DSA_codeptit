#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;

    map<int,int> b;

    for(int x : a){
        b[x] ++;
    }

    for(auto p : b){
            cout << p.first << " ";
    }

    return 0;
}

