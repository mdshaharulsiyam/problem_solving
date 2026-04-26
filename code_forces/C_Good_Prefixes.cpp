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
    vector<long long> arr(n);

    for (int i = 0; i < n; i++)
      cin >> arr[i];

    long long sum = 0, mx = 0;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
      sum += arr[i];
      mx = max(mx, arr[i]);

      if (sum - mx == mx)
        count++;
    }

    cout << count << endl;
  }
}