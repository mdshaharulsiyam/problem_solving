#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        int pref = 0;
        int mn = 0, mx = 0;

        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;
            pref += x;
            mn = min(mn, pref);
            mx = max(mx, pref);
        }

        if (mx - mn <= K)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}