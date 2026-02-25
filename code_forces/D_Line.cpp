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

    string s;
    cin >> s;

    long long total = 0;
    vector<long long> gains;

    for (int i = 0; i < n; i++)
    {
      long long leftValue = i;
      long long rightValue = n - 1 - i;

      if (s[i] == 'L')
      {
        total += leftValue;
        if (rightValue > leftValue)
          gains.push_back(rightValue - leftValue);
      }
      else
      {
        total += rightValue;
        if (leftValue > rightValue)
          gains.push_back(leftValue - rightValue);
      }
    }

    sort(gains.rbegin(), gains.rend());

    long long current = total;
    int m = gains.size();

    for (int k = 1; k <= n; k++)
    {
      if (k <= m)
        current += gains[k - 1];

      cout << current << " ";
    }

    cout << "\n";
  }

  return 0;
}