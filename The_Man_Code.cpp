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

        int mx = (n + 1) / 2;
        int mn = (n + 2) / 3;

        cout << mx << " " << mn << '\n';
    }

    return 0;
}