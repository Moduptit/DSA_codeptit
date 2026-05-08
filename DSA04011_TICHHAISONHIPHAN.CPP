#include <bits/stdc++.h>
using namespace std;
long long convert(string s){
    long long res = 0, base = 1;
    for(int i = s.size()- 1; i >= 0; i--){
        res += (s[i] - '0') * base;
        base *= 2;
    }
    return res;
}

int main(){
    int t; cin >> t;
    while(t--){
        string s1, s2; 
        cin >> s1 >> s2;
        cout << convert(s1) * convert(s2) << endl;
    }
    return 0;
}