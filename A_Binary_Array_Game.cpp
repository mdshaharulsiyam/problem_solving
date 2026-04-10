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
    int ones = 0;

    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      if (a[i] == 1)
        ones++;
    }

    int zeros = n - ones;

    if (ones > zeros)
      cout << "Alice\n";
    else
      cout << "Bob\n";
  }

  return 0;
}