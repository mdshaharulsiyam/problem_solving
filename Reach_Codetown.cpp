#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c) {
    return c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    string target = "CODETOWN";

    while (T--) {
        string s;
        cin >> s;

        bool ok = true;

        for (int i = 0; i < 8; i++) {
            if (isVowel(s[i]) != isVowel(target[i])) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}