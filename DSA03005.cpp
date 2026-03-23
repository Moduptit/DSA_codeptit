#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n, k;
	cin >> t;
	while(t--) {
		cin >> n >> k;
		vector<int> a(n);
		int sum = 0;

		for(int &x : a){
			cin >> x;
			sum += x;
		}
		sort(a.begin(), a.end());

		int K = min(k, n-k);
		//accumulate là hàm tính tính lũy của các phần tử(mặc định là cộng)
		int s = accumulate(a.begin(), a.begin()+K, 0);

		cout << abs(sum - 2*s) << endl;

	}
	return 0;
}
