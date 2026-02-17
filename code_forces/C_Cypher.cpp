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
      cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
      while (x--)
      {
        char move;
        cin >> move;
        if (move == 'D')
        {
          if (arr[i] == 9)
          {
            arr[i] = 0;
          }
          else
          {
            arr[i] = arr[i] + 1;
          }
        }
        else
        {
          if (arr[i] == 0)
          {
            arr[i] = 9;
          }
          else
          {
            arr[i] = arr[i] - 1;
          }
        }
      }
      cout << arr[i] << " ";
    }
    cout << "\n";
  }

  return 0;
}