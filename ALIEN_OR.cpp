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

        vector<bool> found(K, false);

        for (int i = 0; i < N; i++) {
            string s;
            cin >> s;

            int oneCount = 0;
            int pos = -1;

            for (int j = 0; j < K; j++) {
                if (s[j] == '1') {
                    oneCount++;
                    pos = j;
                }
            }

            if (oneCount == 1) {
                found[pos] = true;
            }
        }

        bool ok = true;

        for (int i = 0; i < K; i++) {
            if (!found[i]) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}