#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<long long> a(n);
    long long mx = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mx = max(mx, a[i]);
    }

    long long g = 0;
    long long sum = 0;

    for (int i = 0; i < n; i++) {
        long long diff = mx - a[i];
        g = gcd(g, diff);
        sum += diff;
    }

    cout << sum / g << ' ' << g << '\n';
    return 0;
}