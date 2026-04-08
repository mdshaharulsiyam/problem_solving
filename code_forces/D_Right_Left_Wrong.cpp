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

    vector<long long> a(n);
    for (auto &x : a)
      cin >> x;

    string s;
    cin >> s;

    vector<long long> pref(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
      pref[i + 1] = pref[i] + a[i];
    }

    int l = 0, r = n - 1;
    long long ans = 0;

    while (l < r)
    {
      while (l < n && s[l] != 'L')
        l++;
      while (r >= 0 && s[r] != 'R')
        r--;

      if (l < r)
      {
        ans += pref[r + 1] - pref[l];
        l++;
        r--;
      }
    }

    cout << ans << '\n';
  }

  return 0;
}