#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        int ans = 1 + ((N - 1) / K) * K;
        cout << ans << '\n';
    }

    return 0;
}