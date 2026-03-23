#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MIN = 1e9 + 7;

ll luythuanhanh (ll a, ll b){
	ll res = 1;
	while(b){
		if(b & 1) res = res * a % MIN;
		a = a * a % MIN;
		b = b/2;
	}
	return res;
}

int main(){
	long long n;
	cin >> n;

	cout << luythuanhanh(3,n-1);
	return 0;
}
