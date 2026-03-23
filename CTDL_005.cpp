#include <bits/stdc++.h>
using namespace std;

int main(){
    //nhap
    int n, k;
    cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    cin >> k;

     // solve
    vector<int> b(n, 1);

    for(int i = 0; i < n; i++){
        if(a[i] == k){
            b[i] = 0;
        }
    }

    // in
    for(int i = 0; i < n; i++){
        if(b[i] == 1){
            cout << a[i] << " ";
        }
    }
    return 0;
}