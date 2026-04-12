#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  long long x;
  cin >> n >> x;

  vector<long long> arr(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  map<long long, long long> cnt;
  long long sum = 0, ans = 0;

  cnt[0] = 1;

  for (int i = 0; i < n; i++)
  {
    sum += arr[i];

    if (cnt.count(sum - x))
      ans += cnt[sum - x];

    cnt[sum]++;
  }

  cout << ans << "\n";
}