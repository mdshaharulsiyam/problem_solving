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

    string b;
    cin >> b;

    set<char> st(b.begin(), b.end());

    string r;
    for (char c : st)
      r += c;

    unordered_map<char, char> mp;
    int m = r.size();
    for (int i = 0; i < m; i++)
    {
      mp[r[i]] = r[m - 1 - i];
    }

    for (char c : b)
    {
      cout << mp[c];
    }

    cout << "\n";
  }

  return 0;
}