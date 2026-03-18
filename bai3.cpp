#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	set<string> s;
	for(int i = 0; i < n; i++){
		string x; cin >> x;
		s.insert(x);
	}

	vector<string> a(s.begin(), s.end());
	int m = a.size();

	vector<int> x(k);
	for(int i = 0; i < k; i++) x[i] = i;

	while(!false){
		for(int i = 0; i < k; i++){
			cout << a[x[i]] << " ";
		}
		cout <<endl;

		int i = k - 1;
		while(i >= 0 && x[i] == m - k + i) i --;
		if(i < 0) break;
		x[i]++;
		for(int j = i + 1; j< k; j++){
			x[j] = x[j-1] + 1;
		}

	}
	return 0;
}
