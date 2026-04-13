#include <bits/stdc++.h>
using namespace std;

int n, m, parent[100005], num[100005];

void init(){
    for(int i = 1; i <= n; i++){
        parent[i] =i;
        num[i] = 1;
    }
}

int find(int u){
    if (u != parent[u]){
        parent [u] = find(parent [u]);
    }
    return parent[u];

}

void Union(int u, int v){
    int a = find(u), b = find(v);
    if(a == b) return;
    else if(num[a] < num[b]) swap(a,b);
    parent[b] = a;
    num [a] += num [b];
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >>m;
        init();
        while(m--){
            int u, v; cin >> u >> v;
            Union(u,v);
            
        }
        int MAXN = 0;
        for(int i = 1; i<= n; i++){
            if(i == find(i)) MAXN = max(MAXN, num[i]);
        }
        cout << MAXN << endl;
    }
    return 0;
}