#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<long long> a(n);
    long long total = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total += a[i];
    }

    queue<pair<int, long long>> q;
    q.push({0, 0});

    long long ans = LLONG_MAX;

    while (!q.empty()) {
        auto [idx, sum] = q.front();
        q.pop();

        if (idx == n) {
            ans = min(ans, llabs(total - 2 * sum));
            continue;
        }

        q.push({idx + 1, sum + a[idx]});

        q.push({idx + 1, sum});
    }

    cout << ans << '\n';

    return 0;
}