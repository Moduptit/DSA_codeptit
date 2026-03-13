#include<bits/stdc++.h>
using namespace std;

#define ll long long

const int BASE = pow(10,9) +7;

int main(){
	long long t, x, i, n;
	cin >> t;
	while(t--){
		priority_queue<ll, vector<ll>, greater<ll> > q;
		cin >> n;
		for(int i = 0; i<n; i++){
			cin >> x;
			q.push(x);
		}
		long long kq = 0;
		while(q.size() >= 2){
			ll min1 = q.top(); q.pop();
			ll min2 = q.top(); q.pop();
			ll sum = (min1 + min2)%BASE;
			kq = (kq + sum)%BASE;
			q.push(sum);
		}
		cout << kq << endl;
	}
	return 0;
}
