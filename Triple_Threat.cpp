#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N, X;
        cin >> N >> X;

        vector<int> cnt(N, 0);

        int first = min(N, X);
        for (int i = 0; i < first; i++)
            cnt[i] = 1;

        int extra = max(0, X - N);

        for (int i = N - 1; i >= 0 && extra > 0; i--) {
            int take = min(2, extra);
            cnt[i] += take;
            extra -= take;
        }

        string A(3 * N, '0');

        for (int i = 0; i < N; i++) {
            if (cnt[i] >= 1) A[i] = '1';
            if (cnt[i] >= 2) A[i + N] = '1';
            if (cnt[i] >= 3) A[i + 2 * N] = '1';
        }

        cout << A << '\n';
    }

    return 0;
}