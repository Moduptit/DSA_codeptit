#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin >> t;
    while(t --){
        cin >> n;
        queue<int> q;
        int a[n];
        for(int i = 0; i < n; i++){
            cin>> a[i];
            if(a[i] == 0) q.push(i);
        } 
        cout << q.size() << endl;
    } 
    return 0;
}