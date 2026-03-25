#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    long long cnt[12][12] = {0};
    long long row[12] = {0};
    long long col[12] = {0};

    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
      string s;
      cin >> s;
      int u = s[0] - 'a';
      int v = s[1] - 'a';

      ans += (row[u] - cnt[u][v]);
      ans += (col[v] - cnt[u][v]);
      cnt[u][v]++;
      row[u]++;
      col[v]++;
    }

    cout << ans << "\n";
  }
  return 0;
}