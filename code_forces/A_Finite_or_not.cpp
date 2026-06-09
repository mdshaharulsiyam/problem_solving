#include <iostream>
#include <numeric>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (cin >> n) {
        while (n--) {
            long long p, q, b;
            cin >> p >> q >> b;

            long long g = std::gcd(p, q);
            q /= g;

            while (true) {
                long long common = std::gcd(q, b);
                if (common == 1) break;
                
                while (q % common == 0) {
                    q /= common;
                }
                b = common; 
            }

            if (q == 1) {
                cout << "Finite\n";
            } else {
                cout << "Infinite\n";
            }
        }
    }
    return 0;
}