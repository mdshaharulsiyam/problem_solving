// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//   int a, b, c;
//   cin >> a >> b >> c;
//   vector<int> factors;
//   for (int i = 1; i < c; i++)
//   {
//     if (c % i == 0)
//     {
//       int val = c / i;
//       factors.push_back(i);
//       factors.push_back(val);
//       if (val <= i + 1)
//       {
//         break;
//       }
//     }
//   }
//   bool not_found = true;
//   for (int x : factors)
//   {
//     if (x >= a && x <= b)
//     {
//       cout << x;
//       not_found = false;
//       break;
//     }
//   }
//   if (not_found == true)
//   {
//     cout << -1;
//   }

//   return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b, c;
  cin >> a >> b >> c;

  int val = c;

  while (val < a)
  {
    val += c;
  }

  if (val <= b)
  {
    cout << val;
  }
  else
  {
    cout << -1;
  }

  return 0;
}
