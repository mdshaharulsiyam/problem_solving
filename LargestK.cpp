#include <iostream>

using namespace std;

void solve()
{
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int T;
  cin >> T;
  while (T--)
  {
    long long X, Y;
    cin >> X >> Y;
    long long K = Y / (X - 1);

    cout << K << endl;
  }
  return 0;
}