#include <bits/stdc++.h>
using namespace std;

int first_ge(int n, int x, const vector<int>& v)
{
    int l = 0, r = n - 1;
    int ans = n;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (v[mid] >= x)
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    return ans;
}

int first_gt(int n, int x, const vector<int>& v)
{
    int l = 0, r = n - 1;
    int ans = n;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (v[mid] > x)
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    int k;
    cin >> k;

    while (k--)
    {
        int l, r;
        cin >> l >> r;

        int left = first_ge(n, l, v);
        int right = first_gt(n, r, v);

        cout << right - left << " ";
    }

    return 0;
}