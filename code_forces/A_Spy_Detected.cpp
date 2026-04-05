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

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }

    int val = a[0];

    if (a[1] != val)
    {
      if (a[1] == a[2])
        cout << 1 << '\n';
      else
        cout << 2 << '\n';
    }
    else
    {
      for (int i = 2; i < n; i++)
      {
        if (a[i] != val)
        {
          cout << i + 1 << '\n';
          break;
        }
      }
    }
  }

  return 0;
}