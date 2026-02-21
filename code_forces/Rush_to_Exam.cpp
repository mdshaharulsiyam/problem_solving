#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m, a;
  cin >> n >> m >> a;
  int total_hours_need = ceil((float)m / a);
  if (total_hours_need <= n)
  {
    cout << "Yes";
  }
  else
  {
    cout << "No";
  }
}
