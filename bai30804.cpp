#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll a, b;
	cin >> a >> b;

	vector<ll> lucky;
	queue<ll> q;

	q.push(4);
	q.push(7);

	while(!q.empty()){
		ll x = q.front(); q.pop();
		if(x > 1e9) continue;

		lucky.push_back(x);
		q.push(x*10 + 4);
		q.push(x * 10 + 7);
	}
	sort(lucky.begin(), lucky.end());
	lucky.push_back(1e9);

	ll res = 0, pre = 0;
	for(ll x : lucky){
		ll l = max(a,pre + 1);
		ll r = min(b,x);

		if( l <= r){
			res += (r-l+1) * x;
		}
		pre = x;
		if(x>= b) break;
	}
	cout << res;
}

