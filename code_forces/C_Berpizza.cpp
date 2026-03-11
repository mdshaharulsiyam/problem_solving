#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  queue<int> q;
  priority_queue<pair<int, int>> pq;
  vector<int> s(500005, 0);
  int id = 1;
  while (t--)
  {
    int type;
    cin >> type;
    if (type == 1)
    {
      int m;
      cin >> m;
      pq.push({m, -id});
      q.push(id);
      id++;
    }
    else if (type == 2)
    {
      while (s[q.front()])
      {
        q.pop();
      }
      int x = q.front();
      q.pop();
      s[x] = 1;
      cout << x << " ";
    }
    else
    {
      while (s[-pq.top().second])
      {
        pq.pop();
      }
      int x = -pq.top().second;
      pq.pop();
      s[x] = 1;
      cout << x << " ";
    }
  }

  return 0;
}
