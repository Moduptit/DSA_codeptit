#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        vector<int> ke;
        for (int j = 1; j <= n; ++j) {
            int x;
            cin >> x;
            if (x == 1) {
                ke.push_back(j);
            }
        }

        
        for (int v : ke) {
            cout << v << " ";
        }
        cout << "\n";
    }

    return 0;
}