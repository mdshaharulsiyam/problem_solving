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

    priority_queue<long long, vector<long long>, greater<long long>> even;
    priority_queue<long long> odd;

    for (int i = 0; i < n; i++)
    {
      long long x;
      cin >> x;
      if (x % 2 == 0)
        even.push(x);
      else
        odd.push(x);
    }

    if (even.empty() || odd.empty())
    {
      cout << 0 << "\n";
      continue;
    }

    long long ans = 0;

    while (!even.empty())
    {
      long long e = even.top();
      even.pop();

      long long o = odd.top();

      if (e < o)
      {
        ans += 1;
        odd.push(e + o);
      }
      else
      {
        ans += 2;
        long long new_odd = o + e;
        new_odd += e;
        odd.push(new_odd);
      }
    }

    cout << ans << "\n";
  }

  return 0;
}