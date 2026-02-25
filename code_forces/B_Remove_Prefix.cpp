#include <bits/stdc++.h>
using namespace std;

int main()
{

  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];

    unordered_set<int> seen;
    int remove = 0;

    for (int i = n - 1; i >= 0; i--)
    {
      if (seen.count(a[i]))
        break;
      seen.insert(a[i]);
      remove++;
    }

    cout << n - remove << "\n";
  }

  return 0;
}