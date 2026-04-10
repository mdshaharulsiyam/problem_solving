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

    vector<vector<int>> G(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        cin >> G[i][j];
      }
    }

    vector<int> p(2 * n + 1);

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        p[i + j + 2] = G[i][j];
      }
    }

    vector<bool> used(2 * n + 1, false);
    for (int i = 2; i <= 2 * n; i++)
    {
      used[p[i]] = true;
    }

    for (int x = 1; x <= 2 * n; x++)
    {
      if (!used[x])
      {
        p[1] = x;
        break;
      }
    }

    for (int i = 1; i <= 2 * n; i++)
    {
      cout << p[i] << " ";
    }
    cout << "\n";
  }
}