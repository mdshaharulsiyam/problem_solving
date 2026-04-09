#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];

    int mn = a[n - 1];
    int cnt = 1;

    for (int i = n - 2; i >= 0; i--)
    {
      if (a[i] <= mn)
      {
        cnt++;
        mn = a[i];
      }
    }

    cout << n - cnt + 1 << "\n";
  }

  return 0;
}