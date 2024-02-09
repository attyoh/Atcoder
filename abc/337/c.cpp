#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    rep(i,n) a[i]--;

    vector<int> d(n);
    int s = 0;
    rep(i,n) {
        if (a[i] != -2) d[a[i]] = i;
        else s = i;
    }

    vector<int> ans = {s};
    rep(i,n) {
        s = d[s];
        ans.push_back(s);
    }

    rep(i,n) cout << ans[i]+1 << (i!=n-1 ? ' ' : '\n');;
    return 0;
}