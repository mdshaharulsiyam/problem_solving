#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    b += a % x;
    int trade = a / x;
    b += y * trade;
    cout << b << "\n";
  }

  return 0;
}