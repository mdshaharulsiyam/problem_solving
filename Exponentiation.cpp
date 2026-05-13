#include <bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
int power(int x, int n)
{
    int ans=1%mod;
    while (n!=0)
    {
        if (n&1)
        {
            ans = (1ll*ans%mod*x%mod )%mod;
        }
        x = 1ll * x * x %mod;
        n>>=1;
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x,n;
        cin >>x>>n;
        cout <<power(x,n)<< "\n";
    }
    return 0;
}