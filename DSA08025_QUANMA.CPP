#include <bits/stdc++.h>
using namespace std;

int dx[8] = {-2,-2,-1,-1,1,1,2,2};
int dy[8] = {-1,1,-2,2,-2,2,-1,1};

int bfs(int sx, int sy, int tx, int ty){
    int dist[9][9];
    memset(dist, -1, sizeof(dist));

    queue<pair<int,int>> q;
    q.push({sx, sy});
    dist[sx][sy] = 0;

    while(!q.empty()){
        auto [x, y] = q.front(); q.pop();

        if(x == tx && y == ty)
            return dist[x][y];

        for(int i = 0; i < 8; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx >= 1 && nx <= 8 && ny >= 1 && ny <= 8 && dist[nx][ny] == -1){
                dist[nx][ny] = dist[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }

    return -1;
}

int main(){
    int T;
    cin >> T;

    while(T--){
        string s, t;
        cin >> s >> t;

        int sx = s[0] - 'a' + 1;
        int sy = s[1] - '0';

        int tx = t[0] - 'a' + 1;
        int ty = t[1] - '0';

        cout << bfs(sx, sy, tx, ty) << endl;
    }

    return 0;
}
