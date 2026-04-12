#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    if (n % 2 != 0)
    {
      cout << "NO\n";
    }
    else
    {
      int l = n / 2;
      cout << "YES\n";
      for (int i = 1; i <= l; i++)
      {
        if (i % 2 != 0)
          cout << "AA";
        else
          cout << "BB";
      }
      cout << "\n";
    }
  }

  return 0;
}