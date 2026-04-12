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
    string a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    bool ok = false;
    for (int i = 0; i < n; i++)
    {
      if (c[i] != a[i] && c[i] != b[i])
      {
        ok = true;
        break;
      }
    }

    if (ok)
      cout << "YES\n";
    else
      cout << "NO\n";
  }

  return 0;
}