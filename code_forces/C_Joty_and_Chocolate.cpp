#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    long long count1 = (n / a) * p;
    long long count2 = (n / b) * q;
    long long count3 = n / (a * b / __gcd(a, b));
    long long ans = count1 + count2 - (count3 * (p + q));
    cout << ans+(count3 * max(p, q)) << endl;
    return 0;
}