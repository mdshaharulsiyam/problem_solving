#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        long long m;
        cin >> n >> m;

        if (m < n) {
            cout << "No\n";
            continue;
        }

        if (n % 2 == 0 && m % 2 == 1) {
            cout << "No\n";
            continue;
        }

        cout << "Yes\n";

        if (n % 2 == 1) {
            for (int i = 1; i <= n - 1; i++) {
                cout << 1 << " ";
            }

            cout << m - (n - 1) << "\n";
        } else {

            for (int i = 1; i <= n - 2; i++) {
                cout << 1 << " ";
            }

            long long x = (m - (n - 2)) / 2;

            cout << x << " " << x << endl;
        
        }
    }

    return 0;
}