#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  cin.ignore();
  vector<pair<string, string>> v;
  for (int i = 0; i < n; i++)
  {
    string s;
    getline(cin, s);

    stringstream ss(s);
    string prev, next;
    ss >> prev >> next;
    bool find = false;
    for (int i = 0; i < v.size(); i++)
    {
      pair<string, string> p = v[i];
      if (p.second == prev)
      {
        find = true;
        v[i] = {p.first, next};
      }
    }
    if (find == false)
    {
      v.push_back({prev, next});
    }
  }
  cout << v.size() << "\n";
  for (auto p : v)
  {
    cout << p.first << " " << p.second << "\n";
  }

  return 0;
}
