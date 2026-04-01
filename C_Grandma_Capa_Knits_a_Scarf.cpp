#include <bits/stdc++.h>
using namespace std;

int min_deletions(const string &s, char c)
{
  int l = 0, r = s.size() - 1;
  int deletions = 0;

  while (l < r)
  {
    if (s[l] == s[r])
    {
      l++;
      r--;
    }
    else if (s[l] == c)
    {
      l++;
      deletions++;
    }
    else if (s[r] == c)
    {
      r--;
      deletions++;
    }
    else
    {
      return -1;
    }
  }

  return deletions;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--)
  {
    int n;
    string s;
    cin >> n >> s;

    int ans = n + 1;

    for (char c = 'a'; c <= 'z'; c++)
    {
      int d = min_deletions(s, c);
      if (d != -1)
        ans = min(ans, d);
    }

    if (ans == n + 1)
      cout << -1 << "\n";
    else
      cout << ans << "\n";
  }

  return 0;
}