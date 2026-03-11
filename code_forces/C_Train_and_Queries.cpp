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
    map<int, int> firstPos, lastPos;

    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];

      if (!firstPos.count(arr[i]))
        firstPos[arr[i]] = i;

      lastPos[arr[i]] = i;
    }

    while (k--)
    {
      int a, b;
      cin >> a >> b;

      if (!firstPos.count(a) || !firstPos.count(b))
      {
        cout << "NO\n";
      }
      else
      {
        if (firstPos[a] <= lastPos[b])
          cout << "YES\n";
        else
          cout << "NO\n";
      }
    }
  }

  return 0;
}