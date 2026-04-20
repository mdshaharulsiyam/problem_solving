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
    string s;
    cin >> s;
    int n = s.size();

    string res1 = "";
    for (int i = 0; i < n; i++)
      res1 += "(";
    for (int i = 0; i < n; i++)
      res1 += ")";

    string res2 = "";
    for (int i = 0; i < n; i++)
      res2 += "()";

    bool ok1 = (res1.find(s) == string::npos);
    bool ok2 = (res2.find(s) == string::npos);

    if (!ok1 && !ok2)
    {
      cout << "NO\n";
    }
    else
    {
      cout << "YES\n";
      if (ok1)
        cout << res1 << "\n";
      else
        cout << res2 << "\n";
    }
  }

  return 0;
}