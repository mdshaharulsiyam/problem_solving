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
    long long n, m, x;
    cin >> n >> m >> x;

    long long row = (x - 1) % n;
    long long col = (x - 1) / n;

    long long ans = row * m + col + 1;

    cout << ans << '\n';
  }

  return 0;
}