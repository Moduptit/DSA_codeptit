#include<bits/stdc++.h>
using namespace std;

#define ll long long



int main(){
	int n; ll k;
	cin >> n >> k;

	vector<vector<ll>> a(n,vector<ll>(n)), res(n, vector<ll>(n,0));

	for(auto i : a){
		for(auto x : i) cin >> x;
	}

	for(int i = 0; i < n; i++) res[i][j] = 1;


	return 0;
}
