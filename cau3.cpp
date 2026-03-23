#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll C2(ll n){
	if(n < 2) return 0;
	return n*(n-1) / 2;
}


ll C3(ll n){
	if(n < 3 ) return 0;
	return n*(n-1)*(n-2)/6;
}

int main(){
	int n, q;
	cin >> n >> q;
	vector<int> a(n+1);

	for(int i = 1; i<=n; i++) cin >> a[i];

	vector<ll> chan(n+1,0),le(n+1,0);
	for(int i = 1; i<=n; i++){
		chan[i] = chan[i-1];
		le[i] = le[i-1];
		if(a[i] % 2 == 0) chan[i] ++;
		else le[i]++;
	}
	while(q--){
		int l, r;
		cin >> l >> r;
		ll A = chan[r] - chan[l-1];
		ll B = le[r] - le[l-1];

		ll ans = C3(A) + C2(B) * A;
		cout << ans << endl;
	}
	return 0;
}
