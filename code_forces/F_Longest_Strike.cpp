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
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
      cin >> arr[i];

    sort(arr.begin(), arr.end());

    map<int, int> m;
    for (int x : arr)
      m[x]++;

    int start = -1, end = -1;
    int l = 0;

    int S = -1, E = -1;
    int L = 0;

    int prev = -1;

    for (auto it = m.begin(); it != m.end(); it++)
    {
      if (it->second >= k)
      {
        if (start == -1)
        {
          start = it->first;
          end = it->first;
          l = 1;
        }
        else if (prev != it->first - 1)
        {
          if (l > L)
          {
            L = l;
            S = start;
            E = end;
          }

          start = it->first;
          end = it->first;
          l = 1;
        }
        else
        {
          end = it->first;
          l++;
        }
        prev = it->first;
      }
      else
      {
        if (l > L)
        {
          L = l;
          S = start;
          E = end;
        }
        start = -1;
        end = -1;
        l = 0;
      }
    }

    if (l > L)
    {
      L = l;
      S = start;
      E = end;
    }

    if (S == -1)
    {
      cout << -1 << endl;
    }
    else
    {
      cout << S << " " << E << endl;
    }
  }

  return 0;
}