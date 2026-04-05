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
    int k, n, m;
    cin >> k >> n >> m;

    vector<int> a(n), b(m);
    for (int &x : a)
      cin >> x;
    for (int &x : b)
      cin >> x;

    int i = 0, j = 0;
    int lines = k;
    vector<int> res;

    while (i < n || j < m)
    {
      bool done = false;

      if (i < n && a[i] == 0)
      {
        res.push_back(0);
        lines++;
        i++;
        done = true;
      }
      else if (j < m && b[j] == 0)
      {
        res.push_back(0);
        lines++;
        j++;
        done = true;
      }
      else if (i < n && a[i] <= lines)
      {
        res.push_back(a[i]);
        i++;
        done = true;
      }
      else if (j < m && b[j] <= lines)
      {
        res.push_back(b[j]);
        j++;
        done = true;
      }

      if (!done)
      {
        cout << -1 << '\n';
        break;
      }
    }

    if (res.size() == n + m)
    {
      for (int x : res)
        cout << x << " ";
      cout << '\n';
    }
  }

  return 0;
}