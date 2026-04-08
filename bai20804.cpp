#include <bits/stdc++.h>
using namespace std;
void nhiphan(int n){
	for(int len = 2; len <= n; len+=2){
		int half = len / 2;

		queue<string> q;
		q.push("");
		while(!q.empty()){
			string s = q.front();
			q.pop();
			if((int) s.size() == half){
				string t = s;
				reverse(t.begin(), t.end());
				cout << s + t << " ";
			}else{
			q.push(s+ "0");
			q.push(s + "1");
			}

		}
	}
	cout << endl;
}

int main(){
	int t, n;
	cin >> t;
	while (t--){
		cin >> n;
		nhiphan(n);
	}
	return 0;
}
