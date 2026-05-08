#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;

        sort(a.begin(), a.end());

        int i = 0, j = n / 2;
        int pairs = 0;

        while (i < n/2 && j < n) {
            if (a[j] >= 2 * a[i]) {
                pairs++;
                i++;
                j++;
            } else {
                j++;
            }
        }

        cout << n - pairs << endl;
    }
    return 0;
}