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

    vector<long long> f(n);
    for (int i = 0; i < n; i++)
      cin >> f[i];

    vector<long long> d(n - 1);
    for (int i = 0; i < n - 1; i++)
    {
      d[i] = f[i + 1] - f[i];
    }

    long long sum_d = 0;
    for (auto x : d)
      sum_d += x;

    long long S = sum_d / (n - 1);

    vector<long long> a(n);

    a[0] = (d[0] + S) / 2;

    for (int i = 1; i < n; i++)
    {
      if (i == n - 1)
      {
        a[i] = (S - d[i - 1]) / 2;
      }
      else
      {
        a[i] = (d[i] - d[i - 1]) / 2;
      }
    }

    for (auto x : a)
      cout << x << " ";
    cout << "\n";
  }
}