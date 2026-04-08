#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	cin.ignore();

	while(t--){
		string line;
		getline(cin,line);

		string s = "";
		for(char c : line){
			if(c != ' ') s += c;
		}
		int n = s.size();

		vector<bool> keep(n,false);
		stack<pair<int,char>> st;

		for(int i = 0; i < n; i++){
			if(s[i] == '('){
				char pre = ' ';

				if(i > 0){
					char prev = s[i-1];
					if(prev == '+' || prev == '-') pre = prev;
				}
				st.push({i,pre});
			} else if(s[i] == ')'){
				auto[a,pre] = st.top();
				st.pop();


				char b = ' ';
				int depth = 0;
				for(int j = a + 1;j < i; j++){
					if(s[j] == '(') depth++;
					else if(s[j] == ')') depth --;
					else if(depth == 0 && (s[j] == '+' || s[j] == '-')){
						b = s[j];
						break;
					}
				}
				bool choose = false;
				if(pre == '-' && b != ' ' ) {
					choose = true;
				}
				if (choose){
					keep[a] = true;
					keep[i] = true;
				}
			}
		}
	for(int i =0; i<n; i++){
		if(s[i] != '(' && s[i] != ')') cout << s[i];
		else if (keep[i]) cout << s[i];
	}
	cout << endl;
	}
    return 0;
}
