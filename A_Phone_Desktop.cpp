#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int x, y;
    cin >> x >> y;

    int screens = (y + 1) / 2;

    int remaining = screens * 15 - y * 4;

    if (x > remaining)
    {
      x -= remaining;
      screens += (x + 14) / 15;
    }

    cout << screens << endl;
  }
  return 0;
}