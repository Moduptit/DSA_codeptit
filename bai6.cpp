#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	vector<long long> a(n);
	for(auto &x : a) cin >> x;

	vector<int> l(n), r(n);
	l[0] = - 1;
	for(int i = 1; i < n; i++){
		int j = i - 1;
		while(j>=0 && a[j] >= a[i]) j = l[j];
		l[i] =j;
	}
	 r[n-1] = n;
	 for(int i = n - 2; i >= 0; i--){
		int j = i + 1;
		while(j < n && a[j] >= a[i]) j = r[j];
		r[i] = j;
	 }
	 long long ans = 0;
	 for(int i = 0; i < n; i++){
		long long width = r[i] - l[i] - 1;
		ans = max(ans,width*a[i]);
	 }
	 cout << ans;
}
