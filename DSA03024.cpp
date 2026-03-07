#include <bits/stdc++.h>
using namespace std;


int main(){
	int t, n;
	cin >> t;
	while (t--){
		cin >> n;
		vector<pair<int, int>> a(n);
		for(int i = 0; i< n; i++){
			cin >> a[i].first >> a[i].second;
		}

		sort(a.begin(), a.end(), [](auto  &x, auto &y){
			return x.second < y.second;
		});
		int cnt = 0;
		int last = -1;

		for(auto &s : a){
			if(s.first >= last){
				++cnt;
				last = s.second;
			}
		}
		cout << cnt << endl;
	}

	return 0;
}
