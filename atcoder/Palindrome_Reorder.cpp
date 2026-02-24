#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;

  vector<int> freq(26, 0);
  for (char c : s)
    freq[c - 'A']++;

  int oddCount = 0;
  int oddIndex = -1;

  for (int i = 0; i < 26; i++)
  {
    if (freq[i] % 2 != 0)
    {
      oddCount++;
      oddIndex = i;
    }
  }

  if (oddCount > 1)
  {
    cout << "NO SOLUTION\n";
    return 0;
  }

  string left = "";
  string middle = "";

  for (int i = 0; i < 26; i++)
  {
    left += string(freq[i] / 2, char('A' + i));
  }

  if (oddIndex != -1)
  {
    middle = string(1, char('A' + oddIndex));
  }

  string right = left;
  reverse(right.begin(), right.end());

  cout << left + middle + right << "\n";

  return 0;
}