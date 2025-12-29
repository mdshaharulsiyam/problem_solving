#include <iostream>
#include <algorithm>
using namespace std;
void print_tring(int n)
{
  if (n == 0)
    return;

  cout << "I love Recursion" << endl;
  print_tring(n - 1);
}
int main()
{
  int n;
  cin >> n;
  print_tring(n);
  return 0;
}