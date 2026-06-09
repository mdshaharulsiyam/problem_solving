#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, n;
    cin >> x >> n;

    set<int> pos;
    multiset<int> len;

    pos.insert(0);
    pos.insert(x);
    len.insert(x);

    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;

        auto right = pos.upper_bound(p);
        auto left = prev(right);

        int L = *left;
        int R = *right;

        len.erase(len.find(R - L));

        len.insert(p - L);
        len.insert(R - p);

        pos.insert(p);

        cout << *len.rbegin() << " ";
    }

    cout << '\n';
    return 0;
}