#include <bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
int main()
{
int t,n;
cin >> t;
while (t--)
{
    cin >> n;
    int ans = 1%mod;
    for (int i = 2; i <= n; i++)
    {
        ans = (1ll * ans%mod * i%mod) % mod;
    }
    cout << ans << endl;
}

  return 0;
}