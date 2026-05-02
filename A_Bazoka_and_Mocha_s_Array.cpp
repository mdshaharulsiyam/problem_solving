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

    int bad = 0;

    for (int i = 0; i < n - 1; i++)
    {
      if (a[i] > a[i + 1])
        bad++;
    }

    if (bad > 1)
    {
      cout << "No\n";
    }
    else if (bad == 0)
    {
      cout << "Yes\n";
    }
    else
    {
      if (a[n - 1] <= a[0])
        cout << "Yes\n";
      else
        cout << "No\n";
    }
  }

  return 0;
}