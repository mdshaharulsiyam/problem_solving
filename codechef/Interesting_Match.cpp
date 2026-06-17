#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;

    if (abs(X - Y) <= 2)
        cout << "Interesting\n";
    else
        cout << "Boring\n";

    return 0;
}