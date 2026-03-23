#include <bits/stdc++.h>
using namespace std;

int N;
int a[100];


bool check() {
    for (int i = 0; i < N / 2; i++) {
        if (a[i] != a[N - i - 1]) return false;
    }
    return true;
}
void print() {
    for (int i = 0; i < N; i++) {
        cout << a[i];
        if (i < N - 1) cout << " ";
    }
    cout << '\n';
}
bool next() {
    int i = N - 1;
    while (i >= 0 && a[i] == 1) {
        a[i] = 0;
        i--;
    }
    if (i < 0) return false; 
    a[i] = 1;
    return true;
}

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) a[i] = 0;
    do {
        if (check()) print();
    } while (next());

    return 0;
}