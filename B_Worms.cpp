#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (i == 0)
        {
            v[i] = x;
        }
        else
        {
            v[i] = v[i - 1] + x;
        }
    }
    cin >> q;
    while (q--)
    {
        int m;
        cin >> m;
        int l = 0, r = n - 1;
        int ans = 0;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (v[mid] >= m)
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << ans + 1 <<endl;
    }

    return 0;
}
