#include <bits/stdc++.h>
using namespace std;

int get_mex(vector<int> &v)
{
  unordered_set<int> s(v.begin(), v.end());
  int mex = 0;
  while (s.count(mex))
    mex++;
  return mex;
}

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

    vector<int> a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];

    sort(a.begin(), a.end());

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
      vector<int> b(n);

      for (int j = 0; j < n; j++)
      {
        b[j] = a[j] - a[i];
      }

      ans = max(ans, get_mex(b));
    }

    cout << ans << '\n';
  }

  return 0;
}