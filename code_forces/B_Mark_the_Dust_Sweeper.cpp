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

    vector<long long> a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];

    long long ans = 0;
    bool started = false;

    for (int i = 0; i < n - 1; i++)
    {
      ans += a[i];

      if (a[i] > 0)
      {
        started = true;
      }
      else if (a[i] == 0 && started)
      {
        ans++;
      }
    }

    cout << ans << '\n';
  }

  return 0;
}