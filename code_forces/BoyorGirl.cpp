#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin >> s;
  vector<char> chars;
  for (char c : s)
  {
    auto it = find(chars.begin(), chars.end(), c);
    if (it == chars.end())
    {
      chars.push_back(c);
    }
  }
  if (chars.size() % 2 == 0)
  {
    cout << "CHAT WITH HER!";
  }
  else
  {
    cout << "IGNORE HIM!";
  }

  return 0;
}