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

    vector<long long> a(n);
    for (auto &x : a)
      cin >> x;

    long long sum = 0;
    int operations = 0;

    for (int i = 0; i < n; i++)
    {
      sum += abs(a[i]);

      if (a[i] < 0 && (i == 0 || a[i - 1] >= 0))
      {
        operations++;
      }
    }

    cout << sum << " " << operations << '\n';
  }

  return 0;
}