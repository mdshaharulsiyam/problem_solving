#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t)
    {
        while (t--)
        {
            long long a, b, c;
            cin >> a >> b >> c;

            if (a == b)
            {
                cout << 0 << "\n";
            }
            else if (gcd(a, c) == gcd(b, c))
            {
                cout << 1 << "\n";
            }
            else if (gcd(a, c + 1) == gcd(b, c + 1))
            {
                cout << 2 << "\n";
            }
            else
            {
                cout << 3 << "\n";
            }
        }
    }
    return 0;
}