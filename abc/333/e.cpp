#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int n; cin >> n;

    vector<int> eve(n);
    rep(i,n) {
        int t, x;
        cin >> t >> x;
        if (t==1) eve[i] = x;
        else eve[i] = -x;
    }

    reverse(eve.begin(), eve.end());
    vector<int> cnt(n), ans;
    int now = 0, mx = 0;
    for (int e : eve) {
        if (e > 0) {
            if (cnt[e]) {
                cnt[e]--;
                now--;
                ans.push_back(1);
            } else {
                ans.push_back(0);
            }
        } else {
            cnt[-e]++;
            now++;
        }
        mx = max(mx, now);
    }
    if (now > 0) cout << -1 << endl;
    else {
        cout << mx << endl;
        reverse(ans.begin(), ans.end());
        for (int x : ans) cout << x << ' ';
        cout << endl;
    }
    return 0;
}