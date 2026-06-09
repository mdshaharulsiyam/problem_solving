#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    vector<int> cnt(26, 0);

    for (char c : s)
        cnt[c - 'A']++;

    int oddCount = 0;
    int oddIndex = -1;

    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] % 2)
        {
            oddCount++;
            oddIndex = i;
        }
    }
    
    if (oddCount > 1)
    {
        cout << "NO SOLUTION\n";
        return 0;
    }

    string firstHalf = "";
    string middle = "";

    for (int i = 0; i < 26; i++)
    {
        firstHalf += string(cnt[i] / 2, char('A' + i));

        if (cnt[i] % 2)
            middle = char('A' + i); 
    }

    string secondHalf = firstHalf;
    reverse(secondHalf.begin(), secondHalf.end());

    cout << firstHalf + middle + secondHalf << '\n';

    return 0;
}