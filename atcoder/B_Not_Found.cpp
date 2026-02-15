#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin >> s;
  bool not_found = true;
  for (int i = 0; i < 26; i++)
  {
    char x = 'a' + i;
    auto it = find(s.begin(), s.end(), x);
    if (it == s.end())
    {
      cout << x;
      not_found = false;
      break;
    }
  }
  if (not_found == true)
  {
    cout << "None";
  }

  return 0;
}