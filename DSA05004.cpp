#include <bits/stdc++.h>
using namespace std;

int main(){
    int i, j , n, a[1001], b[1001], kq = 0;
    cin >> n;
    for(i = 0; i < n; i++) cin >> a[i];
    for(i = 0; i < n; i++){
        b[i] = 1;
        for(j = 0; j < i; j++){
            if (a[j] < a[i]){
                b[i] = max(b[i], b[j]+1);
            }
            
        }
        kq = max(kq, b[i]);
        
    }
    cout << kq << endl;
    return 0;
}