#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        int ans = 0;
        for (int k = X; k > Y; k--) {
            ans += (k + 9) / 10;
        }

        cout << ans << '\n';
    }

    return 0;
}