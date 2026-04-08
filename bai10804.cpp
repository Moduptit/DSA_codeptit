#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int n; cin >> n;
	long long res = 0;
	stack<pair<ll,ll>> s;
	for(int i = 0; i< n; i++){
		int x; cin >> x;

		ll cnt = 1;
		while(!s.empty() && s.top ().first < x){
			res += s.top().second;
			s.pop();
		}
		if(!s.empty() && s.top().first == x){
			ll c = s.top().second;
			res += c;
			s.pop();
			if(!s.empty()) res ++;

			cnt = c + 1;
		}else{
			if(!s.empty()) res++;
		}
		s.push({x,cnt});
	}
	cout << res << endl;
    return 0;
}
