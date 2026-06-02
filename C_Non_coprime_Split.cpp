#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        ll l, r;
        cin >> l >> r;

        if (l <= 3 && r <= 3) {
            cout << -1 << '\n';
        }
        else if (r - l >= 1) {
            if (r % 2 == 1) {
                r--;
            }

            cout << r / 2 << " " << r / 2 << '\n';
        }
        else {
            ll divisor = l;

            for (ll i = 2; i * i <= l; i++) {
                if (l % i == 0) {
                    divisor = i;
                    break;
                }
            }

            if (divisor == l) {
                cout << -1 << '\n';
            }
            else {
                cout << divisor << " " << l - divisor << '\n';
            }
        }
    }

    return 0;
}