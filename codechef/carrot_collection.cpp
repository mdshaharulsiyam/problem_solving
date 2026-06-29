#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N, L, R;
        cin >> N >> L >> R;

        vector<int> A(N + 1);

        for (int i = 1; i <= N; i++) {
            cin >> A[i];
        }

        int leftSum = 0, rightSum = 0;

        for (int i = 1; i < L; i++) {
            leftSum += A[i];
        }

        for (int i = R + 1; i <= N; i++) {
            rightSum += A[i];
        }

        cout << max(leftSum, rightSum) << '\n';
    }

    return 0;
}