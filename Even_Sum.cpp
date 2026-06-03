#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        long long total_sum = 0;
        bool has_even = false;
        bool has_odd = false;

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            total_sum += a[i];

            if (a[i] % 2 == 0)
            {
                has_even = true;
            }
            else
            {
                has_odd = true;
            }
        }

        if (total_sum % 2 == 0)
        {
            if (has_even)
            {
                cout << "Yes\n";
            }
            else
            {
                cout << "No\n";
            }
        }
        else
        {
            if (has_odd)
            {
                cout << "Yes\n";
            }
            else
            {
                cout << "No\n";
            }
        }
    }

    return 0;
}