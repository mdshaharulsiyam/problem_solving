#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        map<int, int> mp;
        int max_val = 0;
        
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            mp[x]++;
            max_val = max(max_val, x);
        }
        
        int sad = 0;
        int max_freq = 0;
        for (auto [x, cnt] : mp) {
            if (cnt == 1) {
                sad++;
            }
            max_freq = max(max_freq, cnt);
        }
        
        if (sad == 0) {
            cout << 0 << "\n";
            continue;
        }
        
        if (mp[max_val] == 1 && sad == 1) {
            if (max_freq > 2) {
                cout << 1 << "\n";
            } else {
                cout << 2 << "\n";
            }
        } 
        else {
            cout << (sad + 1) / 2 << "\n";
        }
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         map<int, int> mp;
//         for (int i = 0; i < n; i++)
//         {
//             int x;
//             cin >> x;
//             mp[x]++;
//         }
//         int sad = 0;
//         for (auto [x, cnt] : mp)
//         {
//          if (cnt == 1)
//                 sad++;
//         }
//         cout << (sad + 1) / 2 << endl;
//     }

//     return 0;
// }
