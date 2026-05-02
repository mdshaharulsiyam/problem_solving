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

    int xorAll = 0;

    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
      xorAll ^= x;
    }

    if (n % 2 == 1)
    {
      cout << xorAll << endl;
    }
    else
    {
      if (xorAll == 0)
        cout << 0 << endl;
      else
        cout << -1 << endl;
    }
  }

  return 0;
}