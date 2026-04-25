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
    int n, k;
    cin >> n >> k;

    vector<long long> s(k);
    for (int i = 0; i < k; i++)
      cin >> s[i];

    vector<long long> d;
    for (int i = 1; i < k; i++)
    {
      d.push_back(s[i] - s[i - 1]);
    }

    bool ok = true;
    for (int i = 1; i < d.size(); i++)
    {
      if (d[i] < d[i - 1])
      {
        ok = false;
        break;
      }
    }

    if (ok && k > 1)
    {
      long long len = n - k + 1;
      if (s[0] > len * d[0])
      {
        ok = false;
      }
    }

    if (ok)
    {
      cout << "Yes\n";
    }
    else
    {
      cout << "No\n";
    }
  }

  return 0;
}