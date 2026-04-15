#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, K;
  cin >> N >> K;

  int normal = 100 * N;
  int bribe = K + 60 * N;

  cout << min(normal, bribe) << endl;

  return 0;
}