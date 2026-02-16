#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  vector<int> v(n, -1);
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    v[x - 1] = 1;
  }
  int it = find(v.begin(), v.end(), -1) - v.begin();
  cout << it + 1;
  return 0;
}