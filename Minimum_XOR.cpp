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
        int total = 0;

        for (int i = 0; i < N; i++) {
            cin >> A[i];
            total ^= A[i];
        }

        int ans = total; 

        for (int i = 0; i < N; i++) {
            ans = min(ans, total ^ A[i]);
        }

        cout << ans << '\n';
    }

    return 0;
}