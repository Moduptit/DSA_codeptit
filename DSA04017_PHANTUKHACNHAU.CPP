#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int A[n], B[n-1];
        int pos = 0;
        for(int i = 0; i <n; i++) cin >> A[i];
        for(int i = 0; i < n - 1; i++) cin >> B[i];
        for(int i = 0; i <n; i++){
            if(A[i] != B[i]){
                pos = i + 1;
                break;
            }
        }
        if(pos == 0) cout << n;
        else cout << pos;
        cout << endl;
        
    }
    return 0;
}