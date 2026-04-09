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

    vector<long long> f(n + 1);
    for (int i = 1; i <= n; i++)
      cin >> f[i];

    vector<long long> g(n + 1);

    for (int i = 1; i < n; i++)
    {
      g[i] = f[i + 1] - f[i];
    }

    vector<long long> a(n + 1);

    long long fake_g0 = 0;
    g[0] = fake_g0;

    for (int i = 1; i <= n; i++)
    {
      a[i] = (g[i] - g[i - 1]) / 2;
    }

    long long sum = 0;
    for (int i = 1; i <= n; i++)
      sum += a[i];

    long long diff = -sum;

    for (int i = 1; i <= n; i++)
    {
      a[i] += diff;
    }

    for (int i = 1; i <= n; i++)
    {
      cout << a[i] << " ";
    }
    cout << "\n";
  }

  return 0;
}