#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    while (k--)
    {
        int x;
        cin >> x;

        int l = 0, r = n - 1;
        bool found = false;

        while (l <= r)
        {
            int mid = l + (r - l) / 2;

            if (arr[mid] == x)
            {
                found = true;
                break;
            }
            else if (arr[mid] > x)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        cout << (found ? "YES" : "NO") << '\n';
    }

    return 0;
}