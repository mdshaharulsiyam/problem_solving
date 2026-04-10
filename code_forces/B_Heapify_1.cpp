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

    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
      cin >> a[i];

    vector<bool> vis(n + 1, false);
    bool ok = true;

    for (int i = 1; i <= n; i++)
    {
      if (vis[i])
        continue;

      vector<int> idx, val;

      int j = i;
      while (j <= n && !vis[j])
      {
        vis[j] = true;
        idx.push_back(j);
        val.push_back(a[j]);
        j *= 2;
      }

      sort(idx.begin(), idx.end());
      sort(val.begin(), val.end());

      for (int k = 0; k < (int)idx.size(); k++)
      {
        if (val[k] != idx[k])
        {
          ok = false;
          break;
        }
      }
    }

    cout << (ok ? "YES\n" : "NO\n");
  }

  return 0;
}