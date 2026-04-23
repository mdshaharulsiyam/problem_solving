#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  if (!(cin >> t))
    return 0;
  while (t--)
  {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }

    sort(a.begin(), a.end());

    int mx = 0;
    int current_freq = 0;
    for (int i = 0; i < n; i++)
    {
      current_freq++;
      if (i == n - 1 || a[i] != a[i + 1])
      {
        if (current_freq > mx)
          mx = current_freq;
        current_freq = 0;
      }
    }

    if (mx == n)
    {
      cout << 0 << "\n";
      continue;
    }

    int ops = 0;
    int have = mx;

    while (have < n)
    {
      ops++;
      int can_copy = (have < (n - have)) ? have : (n - have);
      ops += can_copy;
      have += can_copy;
    }

    cout << ops << "\n";
  }
  return 0;
}