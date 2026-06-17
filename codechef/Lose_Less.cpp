#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int M, N;
        cin >> M >> N;

        int K = min(M, N);

        if ((K % 2) != (N % 2))
            K--;

        cout << M - K << "\n";
    }

    return 0;
}