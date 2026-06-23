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
        int totalOR = 0;

        for (int i = 0; i < N; i++) {
            cin >> A[i];
            totalOR |= A[i];
        }

        int curOR = 0;
        int segments = 0;

        for (int i = 0; i < N; i++) {
            curOR |= A[i];

            if (curOR == totalOR) {
                segments++;
                curOR = 0;
            }
        }

        cout << N - segments << '\n';
    }

    return 0;
}