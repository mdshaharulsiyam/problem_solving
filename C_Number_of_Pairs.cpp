#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        long long l, r;
        cin >> n >> l >> r;

        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());

        long long ans = 0;

        for (int i = 0; i < n; i++)
        {
            long long low = l - a[i];
            long long high = r - a[i];

            auto left = lower_bound(a.begin() + i + 1, a.end(), low);
            auto right = upper_bound(a.begin() + i + 1, a.end(), high);

            ans += (right - left);
        }

        cout << ans << '\n';
    }

    return 0;
}