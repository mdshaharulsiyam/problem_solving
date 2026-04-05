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
    int max_val = INT_MIN;
    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
      if (x > max_val)
      {
        max_val = x;
      }
    }
    long long sum = max_val * n;
    cout << sum << "\n";
  }
  return 0;
}