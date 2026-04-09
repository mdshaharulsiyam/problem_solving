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
    string s;
    cin >> s;

    int z = count(s.begin(), s.end(), '0');

    vector<int> ans;

    for (int i = 0; i < z; i++)
    {
      if (s[i] == '1')
      {
        ans.push_back(i + 1);
      }
    }

    for (int i = z; i < n; i++)
    {
      if (s[i] == '0')
      {
        ans.push_back(i + 1);
      }
    }

    if (ans.empty())
    {
      cout << 0 << "\n";
    }
    else
    {
      cout << 1 << "\n";
      cout << ans.size() << " ";
      for (int x : ans)
        cout << x << " ";
      cout << "\n";
    }
  }

  return 0;
}