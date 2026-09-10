#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int a[n];
    int zeros = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 0)
            zeros++;
    }
    if (zeros < 2) {
        cout << -1 << '\n';
    }
    else {
        cout << a[0] + a[n - 1] << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}