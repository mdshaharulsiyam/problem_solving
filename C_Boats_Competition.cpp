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

    vector<int> w(n);
    vector<int> freq(n + 1, 0);

    for (int i = 0; i < n; i++)
    {
      cin >> w[i];
      freq[w[i]]++;
    }

    int ans = 0;

    for (int s = 2; s <= 2 * n; s++)
    {
      int pairs = 0;

      for (int x = 1; x <= n; x++)
      {
        int y = s - x;

        if (y < 1 || y > n)
          continue;
        if (x > y)
          continue;

        if (x == y)
        {
          pairs += freq[x] / 2;
        }
        else
        {
          pairs += min(freq[x], freq[y]);
        }
      }

      ans = max(ans, pairs);
    }

    cout << ans << "\n";
  }

  return 0;
}