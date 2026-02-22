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
    int point_devid = (y - x) / 2;
    cout << point_devid + x << " " << point_devid << "\n";
  }

  return 0;
}