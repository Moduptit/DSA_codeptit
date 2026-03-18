#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a;

    for(int i = 1; i <= n; i++){
        if(i != m) a.push_back(i);
    }
    
    sort(a.begin(), a.end());

    do{
        for(auto x : a) cout << x << " ";
        cout << m << endl;
    } while (next_permutation(a.begin(), a.end()));
    return 0;

}