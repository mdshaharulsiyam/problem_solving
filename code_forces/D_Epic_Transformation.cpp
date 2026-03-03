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

    map<long long, int> freq;
    int maxFreq = 0;

    for (int i = 0; i < n; i++)
    {
      long long x;
      cin >> x;
      freq[x]++;
      maxFreq = max(maxFreq, freq[x]);
    }

    if (maxFreq > n - maxFreq)
    {
      cout << 2 * maxFreq - n << "\n";
    }
    else
    {
      cout << n % 2 << "\n";
    }
  }

  return 0;
}