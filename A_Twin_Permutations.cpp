#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    vector<int> a(n), b(n);
    bool vis[n];
    memset(vis, false, sizeof(vis));
    int last_sum = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
      if (i != 0)
      {
        for (int j = 0; n < n; j++)
        {
          if (vis[j] == true)
            continue;

          // int prev = a[i];
                }
      }
      else
      {
        for (int j = 0; n < n; j++)
        {
          int prev = a[i] + j + 1;
          // int next = a[i + 1] + j + 2;
          // if (prev > next)
          // {
          for (int k = j + 2; k < n; k++)
          {
            int next = a[i + 1] + k;
            if (prev <= next)
            {
              last_sum = prev;
              b[i] = j + 1;
              b[i + 1] = k;
              vis[k - 1] = true;
              i++;
            }
          }
          // }
        }
      }
    }

    cout << endl;
  }

  return 0;
}
