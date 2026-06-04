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

        vector<long long> A(N);

        int cnt[30] = {};

        bool ok = true;

        for (int i = 0; i < N; i++) {
            cin >> A[i];

            for (int b = 0; b < 30; b++) {
                if (A[i] & (1LL << b)) {
                    cnt[b]++;
                    if (cnt[b] > 1) ok = false;
                }
            }
        }

        cout << (ok ? "Yes" : "No") << '\n';
    }

    return 0;
}