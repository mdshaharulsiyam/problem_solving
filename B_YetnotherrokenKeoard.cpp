#include <bits/stdc++.h>
using namespace std;

int main()
{

  int t;
  cin >> t;

  while (t--)
  {
    string s;
    cin >> s;

    vector<char> result;
    vector<int> lowerPos, upperPos;

    for (char c : s)
    {

      if (c == 'b')
      {
        if (!lowerPos.empty())
        {
          int idx = lowerPos.back();
          lowerPos.pop_back();
          result[idx] = '#';
        }
      }
      else if (c == 'B')
      {
        if (!upperPos.empty())
        {
          int idx = upperPos.back();
          upperPos.pop_back();
          result[idx] = '#';
        }
      }
      else
      {
        result.push_back(c);
        int idx = result.size() - 1;

        if (islower(c))
          lowerPos.push_back(idx);
        else
          upperPos.push_back(idx);
      }
    }

    for (char c : result)
    {
      if (c != '#')
        cout << c;
    }

    cout << "\n";
  }

  return 0;
}