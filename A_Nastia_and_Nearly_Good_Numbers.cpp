#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long A, B;
        cin >> A >> B;

        if (B == 1)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
            cout << A << " " << A * B << " " << A * (B + 1) << "\n";
        }
    }

    return 0;
}