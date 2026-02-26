#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin >> s;
  int index = s.find("nta");
  if (index == -1)
  {
    cout << "No";
  }
  else
  {
    cout << "Yes";
  }

  return 0;
}