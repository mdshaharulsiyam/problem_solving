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

        vector<int> A(N);

        unordered_map<int, int> cnt;
        unordered_map<int, long long> cost;

        for (int i = 0; i < N; i++) {
            cin >> A[i];

            int x = A[i];
            int steps = 0;

            while (true) {
                cnt[x]++;
                cost[x] += steps;

                if (x == 0) break;

                x /= 2;
                steps++;
            }
        }

        long long ans = LLONG_MAX;

        for (auto &[v, c] : cnt) {
            if (c == N) {
                ans = min(ans, cost[v]);
            }
        }

        cout << ans << '\n';
    }

    return 0;
}