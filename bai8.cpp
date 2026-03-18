#include<bits/stdc++.h>
using namespace std;

bool check(int d, int m, vector<int>& a){
	int init = 1, last =a[0];
	for(int i = 1; i < a.size(); i++){
		if(a[i] - last >= d) {
			init ++;
			last = a[i];
		}
	}
	return init >= m;
}

int main(){
	int n, m;
	cin >> n >> m;
	vector<int> a(n);

	for(auto &x : a) cin >> x;
	sort(a.begin(), a.end());

	int l = 0, r = a[n-1] - a[0], res = 0;
	while(l<=r) {
		int mid = l + (r-l) / 2;
		if (check(mid,m,a)) {
			res = mid; l = mid+1;
		}
		else {
			r = mid - 1;
		}


	}

	cout << res;
	return 0;
}
