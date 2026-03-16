#include<bits/stdc++.h>
using namespace std;

const int N = 10000;


int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        map<char, int> cnt;
        int n = s.length();

        for(char c : s){
            cnt[c]++;    
        }
        
        int mx = 0;
        for(auto x : cnt){
            mx = max(mx, x.second);
        }

        if(mx <= (n+1)/2) cout << 1 << endl;
        else cout << -1 << endl;  
    }

    return 0;
}
