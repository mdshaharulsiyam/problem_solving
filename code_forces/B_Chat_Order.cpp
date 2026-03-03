#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  vector<string> messages(n);
  for (int i = 0; i < n; i++)
  {
    cin >> messages[i];
  }

  unordered_set<string> seen;
  vector<string> result;
  for (int i = n - 1; i >= 0; i--)
  {
    if (!seen.count(messages[i]))
    {
      seen.insert(messages[i]);
      result.push_back(messages[i]);
    }
  }

  for (string name : result)
  {
    cout << name << "\n";
  }

  return 0;
}