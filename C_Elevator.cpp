#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

int n;
vector<int> a, b;

map<vector<int>, int> state_to_id;
vector<vector<int>> id_to_state;

void generate_states(vector<int>& current, int start_val) {
    if (current.size() <= 4) {
        state_to_id[current] = id_to_state.size();
        id_to_state.push_back(current);
    }
    if (current.size() == 4) return;
    for (int i = start_val; i <= 9; ++i) {
        current.push_back(i);
        generate_states(current, i);
        current.pop_back();
    }
}

int memo[2005][10][715];

int solve(int i, int E, int id) {
    if (i == n && id == 0) return 0;
    if (memo[i][E][id] != -1) return memo[i][E][id];

    int ans = 1e9; 
    vector<int> D = id_to_state[id];
    set<int> candidates;

    for (int d : D) {
        candidates.insert(d);
    }
    
    if (i < n) {
        bool can_pick = (D.size() < 4);
        if (!can_pick) {
            for (int d : D) {
                if (d == a[i]) { 
                    can_pick = true;
                    break;
                }
            }
        }
        if (can_pick) candidates.insert(a[i]);
    }

    for (int X : candidates) {
        vector<int> nD;
        
        for (int d : D) {
            if (d != X) nD.push_back(d);
        }
        
        int ni = i;
        
        while (nD.size() < 4 && ni < n && a[ni] == X) {
            nD.push_back(b[ni]);
            ni++;
        }
        
        sort(nD.begin(), nD.end());
        int nid = state_to_id[nD];
        
        int cost = abs(E - X) + solve(ni, X, nid);
        if (cost < ans) ans = cost;
    }

    return memo[i][E][id] = ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    if (!(cin >> n)) return 0;
    a.resize(n);
    b.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i] >> b[i];
    }

    vector<int> empty_state;
    generate_states(empty_state, 1);

    for (int i = 0; i <= n; ++i) {
        for (int j = 1; j <= 9; ++j) {
            for (size_t k = 0; k < id_to_state.size(); ++k) {
                memo[i][j][k] = -1;
            }
        }
    }

    int min_movement = solve(0, 1, 0); 
    
    cout << min_movement + 2 * n << "\n";

    return 0;
}