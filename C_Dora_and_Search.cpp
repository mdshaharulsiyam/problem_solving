#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    vector<int> a(n + 1);

    for (int i = 1; i <= n; i++)
      cin >> a[i];

    int l = 1, r = n;
    int mn = 1, mx = n;

    while (l <= r)
    {
      if (a[l] == mn)
      {
        l++;
        mn++;
      }
      else if (a[l] == mx)
      {
        l++;
        mx--;
      }
      else if (a[r] == mn)
      {
        r--;
        mn++;
      }
      else if (a[r] == mx)
      {
        r--;
        mx--;
      }
      else
      {
        cout << l << " " << r << "\n";
        break;
      }
    }

    if (l > r)
      cout << -1 << "\n";
  }
}