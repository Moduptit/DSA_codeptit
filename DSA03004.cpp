#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n,s;
    cin >> t;
    while (t--){
        cin >> n;
        priority_queue<int, vector<int>, greater<int>>q;
        for(int i = 0; i < n; i++){
            cin >> s;
            q.push(s);
        }

        int i =0;
        long long kq = 0, num1 = 0, num2 =0;
        while(!q.empty()){
            int x = q.top();
            q.pop();

            if(i % 2 == 0) num1 =  num1 * 10 + x;
            else num2 = num2 * 10 + x;
            i++;
            kq = num1 + num2;
        }
        cout << kq << endl;
    }

    return 0;
}