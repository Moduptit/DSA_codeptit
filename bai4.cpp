#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int n; cin >> n;
	vector<ll> a(n);
	for(auto &x : a) cin >> x;

	vector<ll> res(a);


	for(int len = 2; len <= n; len ++){
		for(int l = 0; l + len - 1 < n; l++){
			int r = l + len - 1;
			res[l] = max(a[l] - res[l+1], a[r] - res[l]);
		}
	}
	ll sum = accumulate(a.begin(), a.end(),0LL);
	ll hieu = res[0];

	ll ty = (sum + hieu) / 2;
	ll teo = sum - ty;

	cout << ty << " " << teo;
	return 0;
}
