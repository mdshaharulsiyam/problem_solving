#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    vector<int> a(n + 1), b(n + 1);
    for (int i = 1; i <= n; i++)
    {
      cin >> a[i] >> b[i];
    }

    vector<int> tm(n + 1);
    for (int i = 1; i <= n; i++)
    {
      cin >> tm[i];
    }

    int cur = 0;

    for (int i = 1; i <= n; i++)
    {
      cur += (a[i] - b[i - 1]) + tm[i];

      if (i == n)
      {
        cout << cur << "\n";
        break;
      }

      int wait = (b[i] - a[i] + 1) / 2;

      cur = max(cur + wait, b[i]);
    }
  }

  return 0;
}