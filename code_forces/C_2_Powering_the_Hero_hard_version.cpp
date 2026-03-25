#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    priority_queue<int> pq;
    long long total_power = 0;

    for (int i = 0; i < n; i++)
    {
      int s;
      cin >> s;

      if (s > 0)
      {
        pq.push(s);
      }
      else
      {
        if (!pq.empty())
        {
          total_power += pq.top();
          pq.pop();
        }
      }
    }

    cout << total_power << "\n";
  }
  return 0;
}