#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(vector<ll>& h){
	int n = h.size();
	stack<int> st;
	ll ans = 0;

	for(int i = 0; i<= n; i++){
		ll cur = (i == n) ? 0 : h[i];
		while(!st.empty() && h[st.top()] > cur){
			ll cao = h[st.top()];
			st.top();
			ll rong = st.empty() ? i : (i - st.top() - 1);
			ans = max(ans, cao * rong);
		}
		st.push(i);
	}
	return ans;
}

int main(){
	ll m, n; cin >> m >> n;

	vector<ll> a(n);
	for(int i = 0; i<n; i++) cin >> a[i] ;

	vector<ll> yellow(n), blue(n);
	for(int i = 0; i < n; i++){
		yellow[i] = a[i];
		blue[i] = m = a[i];
	}

	ll ans = max(solve(yellow), solve(blue));
	cout << ans << endl;

    return 0;
}
