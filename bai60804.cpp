#include <bits/stdc++.h>
using namespace std;

int main(){

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<string> token(n);
		for(int i = 0; i < n ; i++) {
			cin >> token[i];
		}

		stack <long long> s;

		for(int i = n - 1; i >= 0; i--){
			string& tok = token[i];

			if(tok == "+" || tok == "-" || tok == "*" || tok == "/"){
				long long a = s.top(); s.pop();
				long long b = s.top(); s.pop();

				if(tok == "+") s.push(a + b);
				else if(tok == "-") s.push(a-b);
				else if(tok == "*") s.push(a*b);
				else s.push(a/b);
			} else{
				s.push(stoll(tok));
			}
		}
		cout << s.top() << endl;
	}
    return 0;
}
