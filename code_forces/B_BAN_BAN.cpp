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

    int m = (n + 1) / 2;
    cout << m << "\n";

    for (int i = 0; i < m; i++)
    {
      int leftA = 2 + 3 * i;
      int rightN = 3 * n - 3 * i;

      cout << leftA << " " << rightN << "\n";
    }
  }
}