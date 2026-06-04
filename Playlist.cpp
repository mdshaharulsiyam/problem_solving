#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    set<int> s;
    int l = 0;
    int ans = 0;

    for (int r = 0; r < n; r++) {
        while (s.count(a[r])) {
            s.erase(a[l]);
            l++;
        }

        s.insert(a[r]);
        ans = max(ans, r - l + 1);
    }

    cout << ans << '\n';
    return 0;
}