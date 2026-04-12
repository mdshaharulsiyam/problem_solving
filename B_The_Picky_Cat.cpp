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

    vector<int> a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];

    int x = abs(a[0]);

    int smaller = 0;
    for (int i = 1; i < n; i++)
    {
      if (abs(a[i]) < x)
        smaller++;
    }

    int need = (n - 1) / 2;

    if (smaller <= need)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
}