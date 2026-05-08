#include <bits/stdc++.h>
using namespace std;
void inoder(vector<int> a, int i, int n){
    if(i >= n) return;
    inoder(a, 2*i + 1, n);
    cout << a[i] << " ";
    inoder(a, 2*i + 2, n);
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        inoder(a, 0, n);
        cout << endl;
    }   

    return 0;
}