#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, k;
    cin >> n >> k;
    int hours = (n * k) / 60;
    int minute = (n * k) - (60 * hours);
    cout << hours << " " << minute << "\n";
  }

  return 0;
}