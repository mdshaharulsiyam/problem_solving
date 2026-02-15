#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a, b;
  cin >> a >> b;
  int coins = max({(a * 2) - 1, (b * 2) - 1, a + b});
  cout << coins;
  return 0;
}