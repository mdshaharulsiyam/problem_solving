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
        int n, q;
        cin >> n >> q;

        vector<long long> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        sort(v.rbegin(), v.rend());

        vector<long long> pref(n);
        pref[0] = v[0];
        for (int i = 1; i < n; i++)
            pref[i] = pref[i - 1] + v[i];

        while (q--)
        {
            long long x;
            cin >> x;

            auto it = lower_bound(pref.begin(), pref.end(), x);

            if (it == pref.end())
                cout << -1 << '\n';
            else
                cout << (it - pref.begin()) + 1 << '\n';
        }
    }

    return 0;
}