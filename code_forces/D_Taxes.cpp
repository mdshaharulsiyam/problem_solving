#include <bits/stdc++.h>
using namespace std;
bool isPrime(long long n)
{
    if (n <= 1)
        return false;
    for (long long i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    long long x;
    cin >> x;
    if (isPrime(x))
    {
        cout << 1 << endl;
    }
    else if(x % 2 == 0)
    {
        cout << 2 << endl;
    }
    else
    {

        long long y = x - 2;
        if (isPrime(y))
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 3 << endl;
        }
    }

    return 0;
}