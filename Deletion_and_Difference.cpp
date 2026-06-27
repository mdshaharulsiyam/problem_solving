#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        map<int,int> mp;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            mp[x]++;
        }

        int odd = 0;
        int zeros = mp[0];

        for (auto [x, cnt] : mp) {
            if (x == 0) continue;

            if (cnt & 1)
                odd++;

            if (cnt >= 2)
                zeros++;
        }

        cout << odd + (zeros > 0) << '\n';
    }

    return 0;
}