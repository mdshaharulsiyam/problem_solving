#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int i, g, m;
    cin >> i >> g >> m;
    int total_melt = g * m;
    if (i > total_melt)
    {
      cout << i - total_melt << "\n";
    }
    else
    {
      cout << 0 << "\n";
    }
  }
}
