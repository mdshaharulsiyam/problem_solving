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
    long long k;
    cin >> n >> k;

    vector<int> a(n), h(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];
    for (int i = 0; i < n; i++)
      cin >> h[i];

    int ans = 0;

    int i = 0;
    while (i < n)
    {
      int j = i;

      while (j + 1 < n && h[j] % h[j + 1] == 0)
      {
        j++;
      }

      long long sum = 0;
      int left = i;

      for (int right = i; right <= j; right++)
      {
        sum += a[right];

        while (sum > k)
        {
          sum -= a[left];
          left++;
        }

        ans = max(ans, right - left + 1);
      }

      i = j + 1;
    }

    cout << ans << "\n";
  }
}