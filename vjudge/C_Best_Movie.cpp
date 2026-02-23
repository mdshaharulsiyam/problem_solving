#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int min = INT_MAX;
    bool find = false;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
      int a, b;
      cin >> a >> b;
      if (a >= 7)
      {
        find = true;
        if (min > b)
        {
          min = b;
        }
      }
    }
    if (find == false)
      cout << -1 << "\n";
    else
      cout << min << "\n";
  }

  return 0;
}