#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, k;
    cin >> n >> k;
    int temp = n - k;
    int arr[n];
    for (int i = n - 1; i >= temp; i--)
    {
      arr[i] = i + 1;
    }
    for (int i = 0; i < temp; i++)
    {
      arr[i] = temp - i;
    }
    for (int i = 0; i < n; i++)
    {
      cout << arr[i] << " ";
    }
    cout << endl;
  }

  return 0;
}