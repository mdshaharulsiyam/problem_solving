#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    string s;
    cin >> s;

    sort(s.begin(), s.end());

    string res = "";
    int mid = (n + 1) / 2;

    int i = 0, j = mid;

    while (i < mid && j < n)
    {
      res += s[j++];
      res += s[i++];
    }

    while (i < mid)
      res += s[i++];
    while (j < n)
      res += s[j++];

    cout << res << '\n';
  }

  return 0;
}