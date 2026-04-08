#include <bits/stdc++.h>
using namespace std;

int main(){
	string s; cin >> s;

	stack<char> left, right;

	for(char c : s){
		if(c =='-'){
			if(!left.empty()) left.pop();
		} else if(c == '<'){
			if(!left.empty()){
				right.push(left.top());
				left.pop();
			}
		} else if(c == '>'){
			if(!right.empty()){
				left.push(right.top());
				right.pop();
			}
		}else{
			left.push(c);
		}
	}

	string res = "";

	vector<char> res1;

	stack<char> tmp = left;
	vector<char> leftvector;

	while(!tmp.empty()){
		leftvector.push_back(tmp.top());
		tmp.pop();
	}
	reverse(leftvector.begin(), leftvector.end());

	vector<char> rightvector;
	tmp = right;
	while(!tmp.empty()){
		rightvector.push_back(tmp.top());
		tmp.pop();
	}

	for(char c :leftvector) res += c;
	for(char c : rightvector) res += c;

	cout << res << endl;
    return 0;
}
