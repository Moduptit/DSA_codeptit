#include <bits/stdc++.h>
using namespace std;

int a[1009], b[10009];

int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            b[i] = a[i];
        }
        
        sort(b, b+n);
        bool ok = true;

        int start = n/2;
        for(int i = 0; i < start; i++){
            int a1 = a[i], a2 = a[n - 1 - i];
            int b1 = b[i], b2 = b[n - 1 - i];

            if(!((a1 == b1 && a2 == b2) || (a1 == b2 && a2 == b1))){
                ok = false;
                break;
            }
        }
        if(ok) cout << "Yes\n";
        else cout << "No\n";
    }
    
        
    return 0;
}