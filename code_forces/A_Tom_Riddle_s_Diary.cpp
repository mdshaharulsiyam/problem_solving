#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  unordered_set<string> seen;
  while (n--)
  {
    string s;
    cin >> s;
    if (seen.count(s))
    {
      cout << "YES\n";
    }
    else
    {
      cout << "NO\n";
      seen.insert(s);
    }
  }

  return 0;
}