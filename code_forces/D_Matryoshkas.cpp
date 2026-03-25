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
    map<int, int> counts;
    for (int i = 0; i < n; i++)
    {
      int a;
      cin >> a;
      counts[a]++;
    }

    long long total_sets = 0;
    int last_size = -1;
    int last_count = 0;

    for (auto const &[size, count] : counts)
    {
      if (size == last_size + 1)
      {
        if (count > last_count)
        {
          total_sets += (count - last_count);
        }
      }
      else
      {
        total_sets += count;
      }

      last_size = size;
      last_count = count;
    }

    cout << total_sets << "\n";
  }
  return 0;
}