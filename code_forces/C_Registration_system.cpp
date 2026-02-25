#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  unordered_map<string, int> mp;
  mp.reserve(n);

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

      stringstream ss;
      ss << name << num;
      string newName = ss.str();

      cout << newName << "\n";

      mp[name]++;
      mp[newName] = 1;
    }
  }

  return 0;
}