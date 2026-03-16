#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, s, d;
    cin >> t;
    while(t--){
        cin >> s >> d;
        vector<int> a(d,0);

        //dieu kien:
        if((s > 9*d) || (s==0 && d > 1)  ) {
            cout << -1 << endl;
            continue;
        }

        if(s == 0 && d == 1){
            cout << 0 << endl;
            continue;
        }

        s--;

        for(int i = d - 1; i > 0; i--){
            if(s>9){
                a[i] = 9;
                s-=9;
            }else{
                a[i] = s;
                s = 0;
            }
        }

        a[0] =s + 1;
        for(int i = 0; i < d; i++ ){
            cout << a[i];
        }
        cout << endl;  
    }
    return 0;
}