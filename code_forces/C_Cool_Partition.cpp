#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    int count = 1;
    map<int, int> m1;
    map<int, int> m2;
    for (int i = 1; i <= n; i++)
    {
      int x;
      cin >> x;

      if (i == 1)
      {
        m1[x] = 1;
        m2[x] = 1;
      }
      else
      {
        if (m1.count(x))
        {
          m1.erase(x);
        }

        if (!m2.count(x))
        {
          m2[x] = 1;
        }
        if (m1.empty())
        {
          count++;
          m1 = m2;
          m2.clear();
        }
      }
    }
    cout << count << "\n";
  }
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//   ios::sync_with_stdio(false);
//   cin.tie(nullptr);

//   int t;
//   cin >> t;

//   while (t--)
//   {
//     int n;
//     cin >> n;
//     int first = 0;
//     bool first_found = false;
//     int count = 1;
//     for (int i = 1; i <= n; i++)
//     {
//       int x;
//       cin >> x;
//       if (i == 1)
//         first = x;

//       else
//       {
//         if (first == x)
//           first_found = true;
//       }
//       if (first_found == true)
//       {
//         count++;
//         first_found = false;
//       }
//     }
//     cout << count << "\n";
//   }
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   ios::sync_with_stdio(false);
//   cin.tie(nullptr);

//   int t;
//   cin >> t;

//   while (t--)
//   {
//     int n;
//     cin >> n;
//     map<int, int> m;
//     int count = 0;
//     for (int i = 1; i <= n; i++)
//     {
//       int x;
//       cin >> x;
//       if (m.count(x))
//       {
//         int val = m[x] + 1;
//         if (val > count)
//         {
//           count = val;
//         }
//         m[x] = val;
//       }
//       else
//       {
//         m[x] = 1;
//         if (count < 1)
//         {
//           count = 1;
//         }
//       }
//     }
//     cout << count << "\n";
//   }
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   ios::sync_with_stdio(false);
//   cin.tie(nullptr);

//   int t;
//   cin >> t;

//   while (t--)
//   {
//     int n;
//     cin >> n;
//     int first = 0;
//     int second = 0;
//     bool first_found = false;
//     bool second_found = false;
//     int count = 1;
//     for (int i = 1; i <= n; i++)
//     {
//       int x;
//       cin >> x;
//       if (i == 1)
//         first = x;
//       else if (i == 2)
//         second = x;
//       else
//       {
//         if (first == x)
//           first_found = true;
//         if (second == x)
//           second_found = true;
//       }
//       if (first_found == true && second_found == true)
//       {
//         count++;
//         first_found = false;
//         second_found = false;
//       }
//     }
//     cout << count << "\n";
//   }
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   ios::sync_with_stdio(false);
//   cin.tie(nullptr);

//   int t;
//   cin >> t;

//   while (t--)
//   {
//     int n;
//     cin >> n;
//     bool unique_end = false;
//     unordered_map<int, int> m;
//     int count = 1;
//     int len = 0;
//     int find_len = 0;
//     for (int i = 0; i < n; i++)
//     {
//       int x;
//       cin >> x;
//       if (unique_end == true)
//       {
//         if (m[x] == -1)
//         {
//           m[x] = 1;
//           find_len++;
//         }
//         if (find_len == len)
//         {
//           count++;
//           find_len = 0;
//           for (auto &val : m)
//           {
//             val.second = -1;
//           }
//         }
//       }
//       else if (m.count(x))
//       {
//         unique_end = true;
//         if (m[x] == -1)
//         {
//           m[x] = 1;
//           find_len++;
//         }
//         if (find_len == len)
//         {
//           count++;
//           find_len = 0;
//           for (auto &val : m)
//           {
//             val.second = -1;
//           }
//         }
//       }
//       else
//       {
//         m[x] = -1;
//         len++;
//       }
//     }
//     cout << count << "\n";
//   }
// }