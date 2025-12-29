#include <iostream>
using namespace std;

void print_recursion(int x)
{
  if (x == 0)
    return;

  print_recursion(x / 10);
  cout << x % 10 << " ";
}

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int x;
    cin >> x;

    if (x == 0)
    {
      cout << 0;
    }
    else
    {
      print_recursion(x);
    }
    cout << "\n";
  }
  return 0;
}
