#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    cout << fixed << setprecision(10);

    while (T--)
    {
        double s, v;
        cin >> s >> v;
        cout << (2.0 * s) / (3.0 * v) << "\n";
    }

    return 0;
}