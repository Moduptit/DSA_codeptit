#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    vector<int> a(N);
    for (int &x : a) cin >> x;

    while (Q--) {
        int type;
        cin >> type;

        if (type == 1) {
            int C; cin >> C;
            a.insert(a.begin(), C);
        }
        else if (type == 2) {
            int C; cin >> C;
            a.push_back(C);
        }
        else if (type == 3) {
            int X, C;
            cin >> X >> C;
            for (int i = 0; i < a.size(); i++) {
                if (a[i] == X) {
                    a.insert(a.begin() + i + 1, C);
                    break;
                }
            }
        }
        else if (type == 4) {
            if (!a.empty()) a.erase(a.begin());
        }
        else if (type == 5) {
            if (!a.empty()) a.pop_back();
        }
        else if (type == 6) {
            int C; cin >> C;
            for (int i = 0; i < a.size(); i++) {
                if (a[i] == C) {
                    a.erase(a.begin() + i);
                    break;
                }
            }
        }

        // in danh sách
        for (int x : a) cout << x << " ";
        cout << "\n";
    }
}