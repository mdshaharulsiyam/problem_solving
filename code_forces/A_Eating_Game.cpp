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
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> arr[i];
    }
    int max_num = *max_element(arr, arr + n);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
      if (arr[i] == max_num)
      {
        count++;
      }
    }
    cout << count << "\n";
  }

  return 0;
}