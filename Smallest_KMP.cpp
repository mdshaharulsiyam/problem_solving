#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        string S, P;
        cin >> S >> P;

        map<char, int> fs, fp;

        for (char c : S)
            fs[c]++;

        for (char c : P)
            fp[c]++;

        for (auto x : fp)
            fs[x.first] -= x.second;

        string ans1 = "", ans2 = "";

        for (char c = 'a'; c < P[0]; c++)
            ans1 += string(fs[c], c);

        ans1 += P;

        for (char c = P[0]; c <= 'z'; c++)
            ans1 += string(fs[c], c);

        for (char c = 'a'; c <= P[0]; c++)
            ans2 += string(fs[c], c);

        ans2 += P;

        for (char c = P[0] + 1; c <= 'z'; c++)
            ans2 += string(fs[c], c);

        cout << min(ans1, ans2) << '\n';
    }

    return 0;
}