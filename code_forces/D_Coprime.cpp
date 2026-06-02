#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> lastIndex(1001, -1);

        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            lastIndex[x] = i;
        }

        int ans = -1;

        for (int x = 1; x <= 1000; x++)
        {
            for (int y = 1; y <= 1000; y++)
            {
                if (lastIndex[x] != -1 && lastIndex[y] != -1)
                {
                    if (__gcd(x, y) == 1)
                    {
                        ans = max(ans, lastIndex[x] + lastIndex[y]);
                    }
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}