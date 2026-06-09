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

        vector<long long> a(n), pref(n), mx(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            pref[i] = a[i] + (i ? pref[i - 1] : 0);
            mx[i] = max(a[i], (i ? mx[i - 1] : 0LL));
        }

        while (q--)
        {
            long long k;
            cin >> k;

            int pos = upper_bound(mx.begin(), mx.end(), k) - mx.begin();

            if (pos == 0)
                cout << 0 << " ";
            else
                cout << pref[pos - 1] << " ";
        }

        cout << "\n";
    }

    return 0;
}