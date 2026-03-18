#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
	cin >> n >> k;

	vector<int> a(n);
	for(auto &x : a) cin >> x;

	vector<pair<int, vector<int>>> res;
	int total = 1 << n;

    for(int mask = 1; mask < total; mask++){
        vector<int> pos;
        int sum = 0;
        for(int i = 0; i < n; i ++){
            if(mask & (1 << i)){
                pos.push_back(i+1);
                sum += a[i];
            }
        }
        if(sum <= k) res.push_back({sum,pos}) ;
    }


	if (res.empty()){ cout << -1; return 0;}
	sort(res.begin(), res.end(), [](auto &a, auto&b){
		return a.first != b.first ? a.first < b.first : a.second < b.second;
	} );

	for(auto &[sum,pos] : res) {
		for(int x : pos) cout << x << " ";
		cout << "\nSum = " << sum << endl;
	}
	return 0;
}
