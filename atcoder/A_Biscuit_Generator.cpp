#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a, b, t;
  cin >> a >> b >> t;
  int time = (t + .5) / a;
  cout << time * b;
  return 0;
}