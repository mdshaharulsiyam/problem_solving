#include <iostream>
using namespace std;
void binaryprint(int n)
{
  if (n == 0)
  {
    return;
  }
  binaryprint(n / 2);
  cout << n % 2;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    binaryprint(n);
    cout << '\n';
  }

  return 0;
}