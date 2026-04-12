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
    int arr[26] = {0};
    string s = "";
    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
      for (int j = 0; j < 26; j++)
      {
        if (arr[j] == x)
        {
          s += j + 'a';
          arr[j]++;
          break;
        }
      }
    }
    cout << s << "\n";
  }

  return 0;
}