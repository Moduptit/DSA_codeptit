#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> a(n), b(m), c(k);

        for(auto &x : a) cin >> x;
        for(auto &x : b) cin >> x;
        for(auto &x : c) cin >> x;

        int i = 0, j = 0, s = 0;
        bool found = false;

        while(i < n && j < m && s < k){
            if(a[i] == b[j] && b[j] == c[s]){
                cout << a[i] << " ";
                found = true;
                i++; j++; s++;
            }
            else{
                int mn = min({a[i], b[j], c[s]});
                if(a[i] == mn) i++;
                else if(b[j] == mn) j++;
                else s++;
            }
        }

        if(!found) cout << "NO";
        cout << endl;
    }

    return 0;
}