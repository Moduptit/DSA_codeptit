#include <bits/stdc++.h>
using namespace std;

int dx[2] = {0,1};
int dy[2] = {1,0};

int main(){
	int t; cin >> t;
	while(t--){
		int m,n; cin >> m >> n;
		vector<vector<int>> a(m, vector<int>(n));

		for(int i = 0; i<m; i++){
			for(int j = 0; j < n ; j++){
				cin >> a[i][j];
			}
		}
		queue<pair<int,int>> q;
		vector <vector<int>> visited(m, vector<int>(n, false));

		q.push({0,0});
		visited[0][0] = 0;


		while(!q.empty()){
			auto[i,j] = q.front();
			q.pop();

			int k = a[i][j];
			if(j+k<= m && visited[i][j+k] == -1){
				visited[i][j+k] = visited[i][j] + 1;
				q.push({i, j+k});
			}
			if(i+k <= n && visited[i+k][j] == -1){
				visited[i+k][j] = visited[i][j] + 1;
				q.push({i+k, j});
			}
		}

		cout << visited[m-1][n-1] << endl;
	}
	return 0;
}
