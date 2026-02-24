#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  unordered_map<string, int> mp;
  mp.reserve(n);
  mp.max_load_factor(0.7);

  while (n--)
  {
    string name;
    cin >> name;

    if (mp[name] == 0)
    {
      cout << "OK\n";
      mp[name] = 1;
    }
    else
    {
      int num = mp[name];
      string newName = name + to_string(num);
      cout << newName << "\n";
      mp[name]++;
      mp[newName] = 1;
    }
  }

  return 0;
}