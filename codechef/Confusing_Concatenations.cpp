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

        vector<int> C(N);

        int mx = INT_MIN;
        int pos = -1;

        for (int i = 0; i < N; i++) {
            cin >> C[i];
            if (C[i] > mx) {
                mx = C[i];
                pos = i;
            }
        }

        if (pos == 0) {
            cout << -1 << '\n';
            continue;
        }

        cout << pos << '\n';
        for (int i = 0; i < pos; i++)
            cout << C[i] << " ";
        cout << '\n';

        cout << N - pos << '\n';
        for (int i = pos; i < N; i++)
            cout << C[i] << " ";
        cout << '\n';
    }

    return 0;
}