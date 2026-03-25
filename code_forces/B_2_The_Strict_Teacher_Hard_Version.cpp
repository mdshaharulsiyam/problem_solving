#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--)
  {
    int n, m, q;
    cin >> n >> m >> q;

    vector<int> b(m);
    for (int i = 0; i < m; i++)
    {
      cin >> b[i];
    }
    sort(b.begin(), b.end());

    while (q--)
    {
      int a;
      cin >> a;
      auto it = lower_bound(b.begin(), b.end(), a);

      if (it == b.begin())
      {
        cout << b[0] - 1 << "\n";
      }
      else if (it == b.end())
      {
        cout << n - b[m - 1] << "\n";
      }
      else
      {
        int b_right = *it;
        int b_left = *(--it);
        cout << (b_right - b_left) / 2 << "\n";
      }
    }
  }
  return 0;
}