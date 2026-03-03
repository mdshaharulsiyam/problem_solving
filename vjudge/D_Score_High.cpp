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
    int mark = 0;
    for (int i = 0; i < 4; i++)
    {
      int x;
      cin >> x;
      mark = max(x, mark);
    }
    cout << mark << "\n";
  }

  return 0;
}