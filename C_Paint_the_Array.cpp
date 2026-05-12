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
        cin >> n;

        vector<long long> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long G1 = 0;
        long long G2 = 0;

        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                G1 = __gcd(G1, a[i]);
            }
            else
            {
                G2 = __gcd(G2, a[i]);
            }
        }

        bool FlagG1 = true;
        bool FlagG2 = true;

        for (int i = 1; i < n; i += 2)
        {
            if (G1 != 0 && a[i] % G1 == 0)
            {
                FlagG1 = false;
                break;
            }
        }

        for (int i = 0; i < n; i += 2)
        {
            if (G2 != 0 && a[i] % G2 == 0)
            {
                FlagG2 = false;
                break;
            }
        }

        if (FlagG1)
        {
            cout << G1 << '\n';
        }
        else if (FlagG2)
        {
            cout << G2 << '\n';
        }
        else
        {
            cout << 0 << '\n';
        }
    }

    return 0;
}