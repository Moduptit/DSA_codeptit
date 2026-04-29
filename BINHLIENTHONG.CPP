#include <bits/stdc++.h>
using namespace std;
int parent[100005];

int find(int v){
    if(v = parent[v]) return v;
    return parent[v] = find(parent[v]);
}
void Union(int a, int b){
    a = find (a);
    b = find (b);
    if(a != b){
        parent [b] = a;
    }
}

int main(){
    int q; cin >> q;
    for(int i = 1; i <= 100005; i++){
        parent [i] = i;
    }
    while(q--){
        int x, y, z;
        cin >> x >> y >> z;
        if (z == 1){
            Union(x,y);
        }
        else{
            if(find(x) == find(y)){
                cout << 1 << endl;
            }
            else{
                cout << 0 << endl;
            }
        }
    }
    return 0;
}