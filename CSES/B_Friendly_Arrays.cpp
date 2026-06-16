#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        int xorA = 0;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            xorA ^= a[i];
        }

        int mask = 0;
        for (int i = 0; i < m; i++) {
            int x;
            cin >> x;
            mask |= x;
        }

        int xorAll = 0;
        for (int i = 0; i < n; i++) {
            xorAll ^= (a[i] | mask);
        }

        if (n % 2 == 0) {
            cout << min(xorA, xorAll) << ' ' << max(xorA, xorAll) << '\n';
        } else {
            cout << min(xorA, xorAll) << ' ' << max(xorA, xorAll) << '\n';
        }
    }

    return 0;
}