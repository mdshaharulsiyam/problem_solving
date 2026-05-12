#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int X;
        cin >> X;

        int msb = 1;
        while (msb * 2 <= X) {
            msb *= 2;
        }

        int A = X - msb;
        int B = msb;

        cout << A << " " << B << '\n';
    }

    return 0;
}