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

        vector<long long> A(N);
        for (int i = 0; i < N; i++) cin >> A[i];

        vector<int> L(N), R(N);

        L[0] = 1;
        for (int i = 1; i < N; i++) {
            if (A[i - 1] <= A[i])
                L[i] = L[i - 1] + 1;
            else
                L[i] = 1;
        }

        R[N - 1] = 1;
        for (int i = N - 2; i >= 0; i--) {
            if (A[i] <= A[i + 1])
                R[i] = R[i + 1] + 1;
            else
                R[i] = 1;
        }

        int ans = 1;

        for (int i = 0; i < N; i++)
            ans = max(ans, L[i]);

        for (int i = 0; i < N; i++) {
            long long val = A[i] * 1LL * X;

            int left = 0, right = 0;

            if (i > 0 && A[i - 1] <= val)
                left = L[i - 1];

            if (i < N - 1 && val <= A[i + 1])
                right = R[i + 1];

            ans = max(ans, left + 1 + right);
        }

        cout << ans << "\n";
    }

    return 0;
}