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
git init
        git add README.md
            git commit -
    m "first commit" git branch - M main git remote add origin https : // github.com/mdshaharulsiyam/problem_solving.git
                                                                       git push -
                                                                       u origin main