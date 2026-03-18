#include<bits/stdc++.h>
using namespace std;


pair<long long, long long> f[46];

long long solve(int n, long long k) {
    if (k <= 0) return 0;
    if (n < 2) return (n == 0);
    if (k >= f[n].first) return f[n].second;
    if (k <= f[n-1].first) return solve(n-1, k);
    return f[n-1].second + solve(n-2, k - f[n-1].first);
}

int main() {
    f[0] = {1, 1}; f[1] = {1, 0};
    for (int i = 2; i <= 45; i++)
        f[i] = {f[i-1].first + f[i-2].first, f[i-1].second + f[i-2].second};
    int t; cin >> t;
    while (t--) {
        int n; long long k;
        cin >> n >> k;
        cout << solve(n, k) << "\n";
    }
    return 0;
}
