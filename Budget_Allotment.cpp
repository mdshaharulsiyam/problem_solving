#include <iostream>
using namespace std;

int main()
{
  int T;
  cin >> T;

  while (T--)
  {
    int N;
    long long X;
    cin >> N >> X;

    long long total = 0;
    for (int i = 0; i < N; i++)
    {
      long long a;
      cin >> a;
      total += a;
    }

    long long result = min((long long)N, total / X);
    cout << result << endl;
  }

  return 0;
}