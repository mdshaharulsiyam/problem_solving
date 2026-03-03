#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;

  vector<int> arr(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  vector<int> distinct(n);
  set<int> s;

  for (int i = n - 1; i >= 0; i--)
  {
    s.insert(arr[i]);
    distinct[i] = s.size();
  }

  while (m--)
  {
    int index;
    cin >> index;
    cout << distinct[index - 1] << "\n";
  }

  return 0;
}