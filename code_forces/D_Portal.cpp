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
    int n, x, y;
    cin >> n >> x >> y;

    vector<int> p(n);
    for (int i = 0; i < n; i++)
      cin >> p[i];

    if (x == 0 && y == n)
    {
      sort(p.begin(), p.end());
      for (int v : p)
        cout << v << " ";
      cout << "\n";
      continue;
    }

    vector<int> rest;
    for (int i = 0; i < x; i++)
      rest.push_back(p[i]);
    for (int i = y; i < n; i++)
      rest.push_back(p[i]);

    sort(rest.begin(), rest.end());

    vector<int> res = p;
    int idx = 0;

    for (int i = 0; i < x; i++)
    {
      res[i] = rest[idx++];
    }

    for (int i = y; i < n; i++)
    {
      res[i] = rest[idx++];
    }

    for (int v : res)
      cout << v << " ";
    cout << "\n";
  }

  return 0;
}