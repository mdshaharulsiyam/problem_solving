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

    int low = 1, high = n * n;
    vector<vector<int>> a(n, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
      if (i % 2 == 0)
      {
        for (int j = 0; j < n; j++)
        {
          if ((i * n + j) % 2 == 0)
            a[i][j] = low++;
          else
            a[i][j] = high--;
        }
      }
      else
      {
        for (int j = n - 1; j >= 0; j--)
        {
          if ((i * n + (n - 1 - j)) % 2 == 0)
            a[i][j] = low++;
          else
            a[i][j] = high--;
        }
      }
    }

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        cout << a[i][j] << " ";
      }
      cout << endl;
    }
  }
  return 0;
}