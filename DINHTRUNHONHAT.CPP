#include<bits/stdc++.h>
using namespace std;
int n, m;
vector<int> ke[105];
bool visited[105];

void bfs(int s, int skip){
    queue<int> q;
    q.push(s);
    visited[s] = true;
    while(!q.empty()){
        int u = q.front(); q.pop();
        for(int v :ke[u]){
            if (v == skip)continue;
            if(!visited[v]){
                visited[v] = true;
                q.push(v);
            }
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> m;
        for(int i = 1; i <= n; i++){
            ke[i].clear();
            visited[i] = false;
        }
        for(int i = 0; i < m; i++){
            int u, v; cin >> u >> v;
            ke[u].push_back(v);
            ke[v].push_back(u);
        }

        int min = 0, ans = 0;
        for(int i = 1; i <= n; i++){
            memset(visited, false, sizeof(visited));
            int cnt = 0;
            for(int j = 1; j <= n; j++){
                if(j == i) continue;
                if(!visited[j]){
                    cnt++;
                    bfs(j, i);
                }
            }
            if(cnt > min){
                min = cnt;
                ans = i;
            }
        }
        if(min <= 1) cout << 0 << endl;
        else cout << ans << endl;
        
        
    }
    return 0;
}