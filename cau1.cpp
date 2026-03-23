#include <bits/stdc++.h>
using namespace std;

int n,k;
int a[25];

void Try (int i, int start){
	for(int j = start; i <= n; j++){
		a[i] = j;
		if(i == k){
			if (a[k] - a[1] > k){
				for(int x = 1; x <= k; x++){
					cout << a[x] << " ";
				}
				cout << endl;
			}
		}
		else{
			Try(i+1, j+1);
		}
	}


}
int main(){
	cin >> n >> k;
	Try (1,1);
	return 0;
}
