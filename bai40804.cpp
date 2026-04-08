#include <bits/stdc++.h>
using namespace std;

int a[10];
int cnt[4];
int val[4] = {2,3,5,7};
int n;
void solve(int x){
	if(x == n){
		for(int i = 0; i< 4; i++){
			if(cnt[i] == 0) return;
		}
		if(val[a[n-1]] == 2) return;

		for(int i =0; i< n; i++){
				cout << val[a[i]];
		}
		cout << endl;
		return;
	}
	for(int i = 0; i < 4; i++){
		a[x] = i;
		cnt[i] ++;
		solve(x+1);
		cnt[i]--;
		}
	}

int main(){
	cin >> n;
	solve(0);
    return 0;
}
