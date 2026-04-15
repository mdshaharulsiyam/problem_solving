#include <bits/stdc++.h>
using namespace std;

int main()
{
  int T;
  cin >> T;
  while (T--)
  {
    int N, M;
    cin >> N >> M;

    int ans = (N * (N + 1)) / 2 - (M * (M + 1)) / 2;
    cout << ans << endl;
  }
  return 0;
}