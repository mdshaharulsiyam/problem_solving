#include <bits/stdc++.h>
using namespace std;

using int64 = long long;
const int64 INF = (1LL << 60);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<int64> A(N), C(N);
        for (int i = 0; i < N; i++) cin >> A[i];
        for (int i = 0; i < N; i++) cin >> C[i];

        int64 ans = 0;

        for (int i = 0; i < N; i++) {
            int64 P = A[i];

            int already = 0;
            vector<int64> cost;

            for (int j = 0; j < N; j++) {
                if (A[j] >= P) {
                    already++;
                } else {
                    cost.push_back((P - A[j]) * C[j]);
                }
            }

            if (already > K + 1) continue;

            int need = (K + 1) - already;

            if (need > (int)cost.size()) continue;

            sort(cost.begin(), cost.end());

            int64 spend = 0;
            for (int j = 0; j < need; j++)
                spend += cost[j];

            ans = max(ans, 1LL * K * P - spend);
        }

        cout << ans << '\n';
    }

    return 0;
}