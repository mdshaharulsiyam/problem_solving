#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, one = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
      if (x == 1)
      {
        one++;
      }
    }
    int kill_one = (one / 2) + (one % 2);
    cout << (n - one) + kill_one << "\n";
  }

  return 0;
}