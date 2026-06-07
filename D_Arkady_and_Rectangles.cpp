#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

const int MAXM = 200005;

int mx[MAXM << 2];
int mn[MAXM << 2];
priority_queue<int> pq[MAXM << 2];
priority_queue<int> del[MAXM << 2];
bool counted[100005];

void clean_pq(int u) {
    while (!pq[u].empty() && !del[u].empty() && pq[u].top() == del[u].top()) {
        pq[u].pop();
        del[u].pop();
    }
}

int get_max(int u) {
    clean_pq(u);
    return pq[u].empty() ? 0 : pq[u].top();
}

void pushup(int u, int l, int r) {
    int mxc = 0, mnc = 0;
    if (l != r) {
        mxc = max(mx[u << 1], mx[(u << 1) | 1]);
        mnc = min(mn[u << 1], mn[(u << 1) | 1]);
    }
    
    int c = get_max(u);
    
    mx[u] = mxc;
    mn[u] = mnc;
    
    if (c > 0) {
        mn[u] = max(mn[u], c);
        if (counted[c]) {
            if (mx[u] < c) mx[u] = 0;
        } else {
            if (mnc < c) mx[u] = max(mx[u], c);
        }
    }
}

void update(int u, int l, int r, int ql, int qr, int color, int type) {
    if (ql <= l && r <= qr) {
        if (type == 1) {
            pq[u].push(color);
        } else if (type == -1) {
            del[u].push(color);
        }
        pushup(u, l, r);
        return;
    }
    int mid = l + (r - l) / 2;
    if (ql <= mid) update(u << 1, l, mid, ql, qr, color, type);
    if (qr > mid) update((u << 1) | 1, mid + 1, r, ql, qr, color, type);
    pushup(u, l, r);
}

struct Rect {
    int x1, y1, x2, y2, c;
    int ql, qr;
} rects[100005];

struct Event {
    int x;
    int ql, qr;
    int color;
    int type;
    bool operator<(const Event& other) const {
        return x < other.x;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    if (!(cin >> n)) return 0;
    
    vector<int> Y_vals;
    for (int i = 1; i <= n; ++i) {
        cin >> rects[i].x1 >> rects[i].y1 >> rects[i].x2 >> rects[i].y2;
        rects[i].c = i;
        Y_vals.push_back(rects[i].y1);
        Y_vals.push_back(rects[i].y2);
    }
    
    sort(Y_vals.begin(), Y_vals.end());
    Y_vals.erase(unique(Y_vals.begin(), Y_vals.end()), Y_vals.end());
    
    int K = Y_vals.size();
    if (K < 2) {
        cout << 1 << "\n";
        return 0;
    }
    
    int M = K - 2;
    vector<Event> events;
    
    for (int i = 1; i <= n; ++i) {
        rects[i].ql = lower_bound(Y_vals.begin(), Y_vals.end(), rects[i].y1) - Y_vals.begin();
        rects[i].qr = lower_bound(Y_vals.begin(), Y_vals.end(), rects[i].y2) - Y_vals.begin() - 1;
        
        if (rects[i].ql <= rects[i].qr) {
            events.push_back({rects[i].x1, rects[i].ql, rects[i].qr, i, 1});
            events.push_back({rects[i].x2, rects[i].ql, rects[i].qr, i, -1});
        }
    }
    
    sort(events.begin(), events.end());
    
    int ans_count = 1;
    int i = 0;
    while (i < events.size()) {
        int j = i;
        while (j < events.size() && events[j].x == events[i].x) {
            update(1, 0, M, events[j].ql, events[j].qr, events[j].color, events[j].type);
            j++;
        }
        
        while (mx[1] > 0) {
            int c = mx[1];
            counted[c] = true;
            ans_count++;
            update(1, 0, M, rects[c].ql, rects[c].qr, c, 0);
        }
        
        i = j;
    }
    
    cout << ans_count << "\n";
    
    return 0;
}