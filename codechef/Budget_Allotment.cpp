#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N;
        long long X;
        cin >> N >> X;

        vector<long long> deficit;
        long long surplus = 0;
        int ans = 0;

        for (int i = 0; i < N; i++) {
            long long a;
            cin >> a;

            if (a >= X) {
                ans++;
                surplus += (a - X);
            } else {
                deficit.push_back(X - a);
            }
        }

        sort(deficit.begin(), deficit.end());

        for (long long d : deficit) {
            if (surplus >= d) {
                surplus -= d;
                ans++;
            } else {
                break;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}