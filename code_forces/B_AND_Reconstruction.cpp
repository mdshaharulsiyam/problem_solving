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

    vector<int> b(n - 1);
    for (int i = 0; i < n - 1; i++)
      cin >> b[i];

    bool ok = true;

    for (int i = 1; i < n - 1; i++)
    {
      int common = b[i - 1] & b[i + 1];
      if ((common & b[i]) != common)
      {
        ok = false;
        break;
      }
    }

    if (!ok)
    {
      cout << -1 << '\n';
      continue;
    }

    vector<int> a(n);

    a[0] = b[0];
    a[n - 1] = b[n - 2];

    for (int i = 1; i < n - 1; i++)
    {
      a[i] = b[i - 1] | b[i];
    }

    for (int x : a)
      cout << x << " ";
    cout << '\n';
  }

  return 0;
}