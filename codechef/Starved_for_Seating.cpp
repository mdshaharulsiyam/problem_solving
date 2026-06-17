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

        vector<int> A(N);
        int S = 0;
        for (int i = 0; i < N; i++) {
            cin >> A[i];
            S += A[i];
        }

        int D = 2 * K - S;

        sort(A.begin(), A.end());

        long long ans = 0;
        int l = 0, r = N - 1;

        while (l < r) {
            if (A[l] + A[r] > D) {
                ans += (r - l);
                r--;
            } else {
                l++;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}