#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, q;
    long long sum = 0;
    cin >> n >> q;
    long long arr[n + 1];
    arr[0] = 0;
    for (int i = 1; i <= n; i++)
    {
      int x;
      cin >> x;
      sum += x;
      arr[i] = sum;
    }
    while (q--)
    {
      int l, r, k;
      cin >> l >> r >> k;
      long long temp = (sum - (arr[r] - arr[l - 1])) + ((r - l - 1) * k);
      if (temp % 2 == 0)
      {
        cout << "NO\n";
      }
      else
      {
        cout << "YES\n";
      }
    }
  }

  return 0;
}