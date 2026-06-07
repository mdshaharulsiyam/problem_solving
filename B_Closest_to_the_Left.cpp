#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<long long> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    while (k--) {
        long long x;
        cin >> x;

        int l = 0, r = n - 1;
        int ans = -1;

        while (l <= r) {
            int mid = l + (r - l) / 2;

            if (v[mid] <= x) {
                ans = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }

        cout << ans + 1 << '\n';
    }

    return 0;
}