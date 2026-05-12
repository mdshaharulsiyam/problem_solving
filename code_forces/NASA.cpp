#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x) {
    string s = to_string(x);
    string r = s;
    reverse(r.begin(), r.end());
    return s == r;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> palindromes;

    for (int i = 0; i < (1 << 15); i++) {
        if (isPalindrome(i)) {
            palindromes.push_back(i);
        }
    }

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> A(N);
        vector<int> freq(1 << 15, 0);

        for (int i = 0; i < N; i++) {
            cin >> A[i];
            freq[A[i]]++;
        }

        long long ordered_count = 0;

        for (int i = 0; i < N; i++) {
            for (int p : palindromes) {
                int need = A[i] ^ p;
                ordered_count += freq[need];
            }
        }

        long long answer = (ordered_count + N) / 2;

        cout << answer << '\n';
    }

    return 0;
}