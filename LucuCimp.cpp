#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int q;
    cin >> q;

    while (q--)
    {
        int x;
        cin >> x;

        auto low = lower_bound(a.begin(), a.end(), x);
        auto up = upper_bound(a.begin(), a.end(), x);

        if (low == a.begin())
            cout << "X ";
        else
            cout << *(--low) << " ";

        if (up == a.end())
            cout << "X\n";
        else
            cout << *up << "\n";
    }

    return 0;
}