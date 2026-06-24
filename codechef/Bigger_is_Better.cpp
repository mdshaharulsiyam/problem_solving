#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N;
        string A;

        cin >> N;
        cin >> A;

        bool allZ = true;
        for (char c : A) {
            if (c != 'z') {
                allZ = false;
                break;
            }
        }

        if (allZ) {
            cout << -1 << '\n';
        } else {
            cout << string(N, 'z') << '\n';
        }
    }

    return 0;
}