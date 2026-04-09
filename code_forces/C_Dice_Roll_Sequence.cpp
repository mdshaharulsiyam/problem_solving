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

    vector<int> a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];

    const int INF = 1e9;
    vector<vector<int>> dp(n, vector<int>(7, INF));

    for (int v = 1; v <= 6; v++)
    {
      dp[0][v] = (a[0] != v);
    }

    for (int i = 1; i < n; i++)
    {
      for (int v = 1; v <= 6; v++)
      {
        int cost = (a[i] != v);

        for (int u = 1; u <= 6; u++)
        {
          if (u != v && u + v != 7)
          {
            dp[i][v] = min(dp[i][v], dp[i - 1][u] + cost);
          }
        }
      }
    }

    int ans = INF;
    for (int v = 1; v <= 6; v++)
    {
      ans = min(ans, dp[n - 1][v]);
    }

    cout << ans << "\n";
  }

  return 0;
}