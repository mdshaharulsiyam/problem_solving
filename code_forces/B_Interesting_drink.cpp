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
        cin >> v[i];
    sort(v.begin(), v.end());
    cin >> q;
    while (q--)
    {
        int m;
        cin >>m;
        int ans=-1;
        int l=0,r=n-1;
        while (l<=r)
        {
           int mid = l + (r - l) / 2;
           if (v[mid]<=m)
           {
            ans = mid;
            l = mid+1;
           }else{
            r= mid-1;
           }
           
        }
        cout << ans+1 << endl;
        
    }
    
    return 0;
}
