#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int dp[5005][5005];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    for (int i = 1; i <= n; ++i) {
        cin >> dp[i][i];
    }

    for (int len = 2; len <= n; ++len) {
        for (int l = 1; l <= n - len + 1; ++l) {
            int r = l + len - 1;
            dp[l][r] = dp[l][r - 1] ^ dp[l + 1][r];
        }
    }

    for (int len = 2; len <= n; ++len) {
        for (int l = 1; l <= n - len + 1; ++l) {
            int r = l + len - 1;
            dp[l][r] = max(dp[l][r], max(dp[l][r - 1], dp[l + 1][r]));
        }
    }

    int q;
    cin >> q;
    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << dp[l][r] << "\n";
    }

    return 0;
}