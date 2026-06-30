#include <bits/stdc++.h>
using namespace std;

int longestStreak(vector<int> &a) {
    int cur = 0, mx = 0;

    for (int x : a) {
        if (x > 0) {
            cur++;
            mx = max(mx, cur);
        } else {
            cur = 0;
        }
    }

    return mx;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> om(N), addy(N);

        for (int i = 0; i < N; i++)
            cin >> om[i];

        for (int i = 0; i < N; i++)
            cin >> addy[i];

        int omStreak = longestStreak(om);
        int addyStreak = longestStreak(addy);

        if (omStreak > addyStreak)
            cout << "OM\n";
        else if (addyStreak > omStreak)
            cout << "ADDY\n";
        else
            cout << "DRAW\n";
    }

    return 0;
}