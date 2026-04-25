#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int T;
  cin >> T;
  while (T--)
  {
    int N;
    cin >> N;

    bool isGood = true;
    for (int i = 0; i < N; i++)
    {
      int score;
      cin >> score;
      if (score <= 4)
      {
        isGood = false;
      }
    }

    if (isGood)
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }
  return 0;
}