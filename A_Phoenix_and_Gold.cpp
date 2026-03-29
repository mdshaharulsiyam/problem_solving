#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n, x;
    cin >> n >> x;

    vector<int> a(n);
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      sum += a[i];
    }

    if (sum == x)
    {
      cout << "NO\n";
      continue;
    }

    sort(a.begin(), a.end());

    int prefix = 0;

    for (int i = 0; i < n; i++)
    {
      if (prefix + a[i] == x)
      {
        swap(a[i], a[i + 1]);
      }
      prefix += a[i];
    }

    cout << "YES\n";
    for (int val : a)
      cout << val << " ";
    cout << "\n";
  }

  return 0;
}