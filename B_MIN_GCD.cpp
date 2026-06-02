#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);

        long long mn = LLONG_MAX;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mn = min(mn, a[i]);
        }

        int cnt = 0;
        for (auto x : a)
            if (x == mn)
                cnt++;

        if (cnt >= 2) {
            cout << "Yes\n";
            continue;
        }

        vector<long long> b;

        for (auto x : a) {
            if (x != mn && x % mn == 0)
                b.push_back(x);
        }

        if (b.empty()) {
            cout << "No\n";
            continue;
        }

        long long g = b[0];
        for (int i = 1; i < (int)b.size(); i++) {
            g = gcd(g, b[i]);
        }

        cout << (g == mn ? "Yes" : "No") << '\n';
    }

    return 0;
}