#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<long long> v;
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        v.push_back(x);
    }
    while (k--)
    {
        long long x;
        cin >> x;
        long long l = 0, r = n - 1;
        int ans = -1;
        while (l <= r)
        {
            long long mid = (l + r) / 2;
            if (v[mid] >= x)
            {
                ans = mid;
                r = mid - 1;
            }else{
                l=mid+1;
            }
        }
        if (ans==-1)
        cout << n+1 <<endl;
        else
        cout << ans+1 <<endl;
        
    }

    return 0;
}
