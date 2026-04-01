#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  vector<long long> a(n);
  for (auto &x : a)
    cin >> x;

  int l = 0, r = n - 1;
  long long left_sum = 0, right_sum = 0;
  long long ans = 0;

  while (l <= r)
  {
    if (left_sum <= right_sum)
    {
      left_sum += a[l];
      l++;
    }
    else
    {
      right_sum += a[r];
      r--;
    }

    if (left_sum == right_sum)
    {
      ans = left_sum;
    }
  }

  cout << ans << '\n';

  return 0;
}