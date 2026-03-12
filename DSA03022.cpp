#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    priority_queue<long long> maxq;
    priority_queue<long long, vector<long long>, greater<long long>> minq;

    for(int i = 0; i < n; i++){
        long long x;
        cin >> x;
        maxq.push(x);
        minq.push(x);
    }

    long long a = maxq.top(); maxq.pop();
    long long b = maxq.top(); maxq.pop();
    long long c = maxq.top();

    long long d = minq.top(); minq.pop();
    long long e = minq.top();
    
    long long res = LLONG_MIN;

    res = max(res, a*b);       
    res = max(res, d*e);        
    res = max(res, a*b*c);      
    res = max(res, d*e*a);  

    cout << res;
}