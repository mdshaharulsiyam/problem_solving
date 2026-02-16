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
    int arr[n];
    bool found = false;
    int val;
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
      if (found == true)
        break;
      if (arr[i] == 0)
        continue;
      if (arr[i] == 67)
      {
        found = true;
        break;
      }

      for (int j = i + 1; j < n; j++)
      {
        if (found == true)
          break;
        if (arr[j] == 0)
          continue;
        val = arr[i] * arr[j];
        if (val == 67)
        {
          found = true;
          break;
        }

        for (int k = j + 1; k < n; k++)
        {
          if (arr[k] == 0)
            continue;

          val = val * arr[k];
          if (val == 67)
          {
            found = true;
            break;
          }
        }
      }
    }
    if (found == true)
      cout << "YES\n";
    else
      cout << "NO\n";
  }

  return 0;
}