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

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
      cin >> arr[i];

    sort(arr.begin(), arr.end());

    map<int, int> m;
    for (int x : arr)
      m[x]++;

    int L = -1, R = -1;
    int l = -1, r = -1;

    for (int i = 0; i < n; i++)
    {
      if (i > 0 && arr[i] == arr[i - 1])
        continue;

      if (m[arr[i]] < k)
        continue;

      if (l == -1)
        l = arr[i];

      if (i == n - 1 || arr[i + 1] != arr[i] + 1 || m[arr[i + 1]] < k)
      {
        r = arr[i];
        if (L == -1 || r - l > R - L)
        {
          L = l;
          R = r;
        }
        l = -1;
      }
    }

    if (L == -1)
      cout << -1 << "\n";
    else
      cout << L << " " << R << "\n";
  }

  return 0;
}