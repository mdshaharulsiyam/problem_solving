#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, s, m;
    cin >> n >> s >> m;
    int arr[(n * 2) + 1] = {0};
    for (int i = 1; i <= n * 2; i += 2)
    {
      int x, y;
      cin >> x >> y;
      arr[i] = x;
      arr[i + 1] = y;
    }

    bool flag = false;

    for (int i = n * 2; i >= 0; i -= 2)
    {
      if (i == n * 2)
      {
        if (m - arr[i] >= s)
        {
          flag = true;
          break;
        }
      }
      else
      {
        if (arr[i + 1] - arr[i] >= s)
        {
          flag = true;
          break;
        }
      }
    }
    if (flag)
    {
      cout << "YES\n";
    }
    else
    {
      cout << "NO\n";
    }
  }

  return 0;
}