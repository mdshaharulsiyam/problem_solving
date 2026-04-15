#include <bits/stdc++.h>
using namespace std;

int main()
{
  int T;
  cin >> T;
  while (T--)
  {
    int N;
    cin >> N;

    vector<int> pos, neg;

    for (int i = 0; i < N; i++)
    {
      int x;
      cin >> x;
      if (x >= 0)
        pos.push_back(x);
      else
        neg.push_back(x);
    }

    int sum = 0;
    int count = 0;

    for (int x : pos)
    {
      sum += x;
      count++;
    }

    sort(neg.begin(), neg.end(), greater<int>());

    for (int x : neg)
    {
      if (sum + x >= 0)
      {
        sum += x;
        count++;
      }
      else
      {
        break;
      }
    }

    cout << count << endl;
  }

  return 0;
}