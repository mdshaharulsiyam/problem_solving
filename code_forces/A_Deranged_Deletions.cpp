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

    vector<int> a(n), c;
    for (int i = 0; i < n; i++)
      cin >> a[i];

    c = a;
    sort(c.begin(), c.end());

    vector<int> d;

    for (int i = 0; i < n; i++)
    {
      if (a[i] != c[i])
      {
        d.push_back(a[i]);
      }
    }

    if (d.empty())
    {
      cout << "NO\n";
    }
    else
    {
      cout << "YES\n";
      cout << d.size() << "\n";
      for (int x : d)
        cout << x << " ";
      cout << "\n";
    }
  }

  return 0;
}