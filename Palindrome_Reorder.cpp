#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;

  int freq[26] = {0};

  for (int i = 0; i < s.size(); i++)
  {
    freq[s[i] - 'A']++;
  }

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
    cout << "NO SOLUTION";
    return 0;
  }

  for (int i = 0; i < 26; i++)
  {
    for (int j = 0; j < freq[i] / 2; j++)
    {
      cout << char(i + 'A');
    }
  }

  if (oddIndex != -1)
  {
    for (int j = 0; j < freq[oddIndex]; j++)
    {
      cout << char(oddIndex + 'A');
    }
  }

  for (int i = 25; i >= 0; i--)
  {
    for (int j = 0; j < freq[i] / 2; j++)
    {
      cout << char(i + 'A');
    }
  }

  return 0;
}