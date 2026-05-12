#include <bits/stdc++.h>
using namespace std;
int main()
{
 long long n,k;
    vector<long long>v;
    cin >> n >> k;
    for (long long i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
        v.push_back(i);
        if (i != n / i)
        {
            v.push_back(n / i);
        }
    }
    }
    sort(v.begin(), v.end());
    if (k <= v.size())
    {
        cout << v[k - 1] << endl;
    }
    else
    {
        cout << -1 << endl;
    }
  return 0;
}