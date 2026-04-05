#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int x, n;
  cin >> x >> n;
  set<int> positions;
  positions.insert(0);
  positions.insert(x);
  multiset<int> gaps;
  gaps.insert(x);

  for (int i = 0; i < n; i++)
  {
    int p;
    cin >> p;
    auto it_right = positions.upper_bound(p);
    auto it_left = prev(it_right);

    int left_pos = *it_left;
    int right_pos = *it_right;

    gaps.erase(gaps.find(right_pos - left_pos));

    gaps.insert(p - left_pos);
    gaps.insert(right_pos - p);
    positions.insert(p);
    cout << *gaps.rbegin() << (i == n - 1 ? "" : " ");
  }
  cout << endl;

  return 0;
}