#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//   int X;
//   cin >> X;

//   cout << 1000 * (1 << (4 - X)) << endl;

//   return 0;
// }

int main()
{
  int N, M;
  cin >> N >> M;

  cout << min(N, M - N) << endl;

  return 0;
}