#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int t;
  cin >> t;
  while (t--)
  {

    long long int n;
    cin >> n;
    long long int arr[n];
    for (long long int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    for (long long int i = 0; i < n - 2; i++)
    {
      arr[n - 2] -= arr[i];
    }
    cout << arr[n - 1] - arr[n - 2] << "\n";
  }

  return 0;
}
