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
    int nonZero = 0;
    int zero = 0;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
      v.push_back(x);
      if (x != 0)
      {
        nonZero++;
      }
      else
      {
        zero++;
      }
    }
    int ans;
    if (zero == 0)
    {
      ans = 0;
    }
    else
    {
      if (nonZero >= zero - 1)
      {
        ans = 0;
      }
      else
      {
        int mx = *max_element(v.begin(), v.end());
        if (mx == 1)
        {
          ans = 2;
        }
        else
        {
          ans = 1;
        }
      }
    }
    cout << ans << endl;
  }

  return 0;
}