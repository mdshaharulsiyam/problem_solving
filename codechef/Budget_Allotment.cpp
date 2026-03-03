#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    long long x;
    cin >> n >> x;

    long long total = 0;
    long long count = 0;
    priority_queue<long long> v;
    for (int i = 0; i < n; i++)
    {
      long long a;
      cin >> a;
      if (a < x)
      {
        v.push(a);
      }
      else
      {
        total += a - x;
        count++;
      }
    }
    while (!v.empty() && total > 0)
    {
      long long val = v.top();
      v.pop();
      long long need = x - val;
      if (need > total)
      {
        break;
      }
      else
      {
        total -= need;
        count++;
      }
    }
    cout << count << "\n";
  }

  return 0;
}