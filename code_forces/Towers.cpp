#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    multiset<int> tops;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        auto it = tops.upper_bound(x);

        if (it != tops.end()) {
            tops.erase(it);
        }

        tops.insert(x);
    }

    cout << tops.size() << '\n';
    return 0;
}