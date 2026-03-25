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

    vector<int> a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];

    int m;
    cin >> m;

    while (m--)
    {
      string s;
      cin >> s;

      if (s.size() != n)
      {
        cout << "NO\n";
        continue;
      }

      unordered_map<int, int> last_num;
      int last_char[26];
      memset(last_char, -1, sizeof(last_char));

      bool ok = true;

      for (int i = 0; i < n; i++)
      {
        int num_last = last_num.count(a[i]) ? last_num[a[i]] : -1;
        int char_last = last_char[s[i] - 'a'];

        if (num_last != char_last)
        {
          ok = false;
          break;
        }

        last_num[a[i]] = i;
        last_char[s[i] - 'a'] = i;
      }

      cout << (ok ? "YES\n" : "NO\n");
    }
  }
}