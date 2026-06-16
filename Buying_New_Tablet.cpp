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
        int n, b;
        cin >> n >> b;
        long long area = INT_MIN;

        while (n--)
        {
            long long c_area;
            int w, h, p;
            cin >> w >> h >> p;
            if (p <= b)
            {
                c_area = (long long)w * h;
                area = max(c_area, area);
            }
        }
        if (area < 0)
            cout << "no tablet\n";
        else
            cout << area << endl;
    }

    return 0;
}
