#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        vector<int> a(n), b(m), res(n+m-1, 0);

        for (int &x : a) cin >> x;
        for (int &x : b) cin >> x;

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                res[i+j] += a[i] * b[j];

        for (int v : res)
            cout << v << " ";
        cout << "\n";
    }
}