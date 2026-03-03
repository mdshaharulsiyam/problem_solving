#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int start = n % 2 == 0 ? n - 2 : n - 1;
  for (int i = start; i >= 0; i -= 2)
  {

    cout << arr[i] << " ";
  }

  return 0;
}
