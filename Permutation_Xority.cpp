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
        if (n == 2)
        {
            cout << -1;
        }
        else if (n % 2 == 0)
        {
            for (int i = 1; i <= n - 3; i++)
            {
                cout << i << " ";
            }
            cout << n << " " << n - 2 << " " << n - 1;
        }
        else
        {
            for (int i = 1; i <= n; i++)
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}