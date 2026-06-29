#include <iostream>
using namespace std;

int main() {
    int D, T;
    cin >> D >> T;

    cout << max(0, D - T) << endl;

    return 0;
}