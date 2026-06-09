#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    int t = 1;

    while (cin >> n >> q)
    {
        if (n == 0 && q == 0)
            break;

        vector<int> marbles(n);

        for (int i = 0; i < n; i++)
            cin >> marbles[i];

        sort(marbles.begin(), marbles.end());

        cout << "CASE# " << t++ << ":\n";

        while (q--)
        {
            int x;
            cin >> x;

            auto it = lower_bound(marbles.begin(), marbles.end(), x);

            if (it != marbles.end() && *it == x)
            {
                int pos = (it - marbles.begin()) + 1;
                cout << x << " found at " << pos << "\n";
            }
            else
            {
                cout << x << " not found\n";
            }
        }
    }

    return 0;
}