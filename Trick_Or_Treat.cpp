#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;

        vector<int> A(N), B(N);
        vector<long long> freq(M, 0);

        for (int i = 0; i < N; i++)
            cin >> A[i];

        for (int i = 0; i < N; i++) {
            cin >> B[i];
            freq[B[i] % M]++;
        }

        long long ans = 0;

        for (int i = 0; i < N; i++) {
            int rem = A[i] % M;
            int need = (M - rem) % M;
            ans += freq[need];
        }

        cout << ans << '\n';
    }

    return 0;
}