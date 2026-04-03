#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    set<int> s;
    for (int i = 0; i < N; i++) {
        int x; cin >> x;
        s.insert(x);
    }

    vector<int> B(s.begin(), s.end());
    int M = B.size();

    vector<int> a(K);
    for (int i = 0; i < K; i++) a[i] = i;

    while (true) {
        for (int i = 0; i < K; i++) {
            cout << B[a[i]] << " ";
        }
        cout << endl;

        int i = K - 1;
        while (i >= 0 && a[i] == M - K + i) i--;

        if (i < 0) break;

        a[i]++;
        for (int j = i + 1; j < K; j++) {
            a[j] = a[j - 1] + 1;
        }
    }

    return 0;
}