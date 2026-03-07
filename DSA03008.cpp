#include <bits/stdc++.h>
using namespace std;

struct task{
	int start, finish;
}a[1005];
bool cmp(task a, task b){
	return a.finish < b.finish;
}

int main(){
	int n, t, i, j, cnt;
	cin >> t;
	while(t--){
		cin >> n;
		for(i = 0; i < n; i++) cin >> a[i].start;
		for(i = 0; i < n; i++) cin >> a[i].finish;
		sort(a, a+n, cmp);
		i = 0; cnt = 1;
		for(j = 1; j < n; j++){
			if(a[j].start >= a[i].finish){
				i = j; cnt++;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
