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

    int ones = count(s.begin(), s.end(), '1');

    if (ones % 2 != 0 || s[0] == '0' || s[n - 1] == '0')
    {
      cout << "NO\n";
      continue;
    }

    string a = "", b = "";

    int one_used = 0;
    int zero_toggle = 0;

    for (int i = 0; i < n; i++)
    {
      if (s[i] == '1')
      {
        if (one_used < ones / 2)
        {
          a += '(';
          b += '(';
        }
        else
        {
          a += ')';
          b += ')';
        }
        one_used++;
      }
      else
      {
        if (zero_toggle % 2 == 0)
        {
          a += '(';
          b += ')';
        }
        else
        {
          a += ')';
          b += '(';
        }
        zero_toggle++;
      }
    }

    cout << "YES\n";
    cout << a << "\n";
    cout << b << "\n";
  }

  return 0;
}