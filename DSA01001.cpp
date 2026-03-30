#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while (t--){
		string X; cin >> X;
		int i=X.size()-1;
		while (i>=0 && X[i]=='1'){
			X[i]='0';
			--i;
		}
		if (i!=-1) X[i]='1';
		for (int i=0; i<X.size(); i++) cout << X[i];
		cout << endl;
	}
	return 0;
}