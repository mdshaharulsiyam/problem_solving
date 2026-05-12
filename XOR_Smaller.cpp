#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int ans;
        cin >> ans;

        for (int i = 1; i < N; i++) {
            int x;
            cin >> x;
            ans &= x;
        }

        cout << ans << endl;
    }

    return 0;
}