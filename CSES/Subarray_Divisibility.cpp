#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    long long total_subarrays = 0; 
    long long current_prefix_sum = 0;

    vector<long long> remainder_count(n, 0);
    remainder_count[0] = 1; 

    for (int i = 0; i < n; i++) {
        long long val;
        cin >> val;

        current_prefix_sum += val;

        int remainder = (current_prefix_sum % n + n) % n;

        total_subarrays += remainder_count[remainder];

        remainder_count[remainder]++;
    }

    cout << total_subarrays << "\n";

    return 0;
}
