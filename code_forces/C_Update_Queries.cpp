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
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;

    vector<int> ind(m);
    for (int i = 0; i < m; i++)
    {
      cin >> ind[i];
    }

    string c;
    cin >> c;
    set<int> unique_indices;
    for (int x : ind)
    {
      unique_indices.insert(x);
    }
    sort(c.begin(), c.end());
    int char_idx = 0;
    for (int pos : unique_indices)
    {
      s[pos - 1] = c[char_idx++];
    }

    cout << s << "\n";
  }
  return 0;
}