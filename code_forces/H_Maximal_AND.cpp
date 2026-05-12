#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        long long k;
        cin >> n >> k;

        vector<long long> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long ans = 0;

        for (int bit = 30; bit >= 0; bit--) {
            long long cost = 0;

            for (int i = 0; i < n; i++) {
                if (((a[i] >> bit) & 1) == 0) {
                    cost++;
                }
            }

            if (cost <= k) {
                k -= cost;
                ans |= (1LL << bit);
            }
        }

        cout << ans << endl;
    }

    return 0;
}