#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    int n; cin >> n;
    vector<int> a(n), b(n), c(n);
    rep(i,n) cin >> a[i];
    rep(i,n) cin >> b[i];
    rep(i,n) cin >> c[i];

    vector<int> an(46), bn(46), cn(46);
    rep(i,n) {
        ++an[a[i]%46];
        ++bn[b[i]%46];
        ++cn[c[i]%46];
    }

    ll ans = 0;
    rep(i,46) rep(j,46) rep(k,46) {
        if ((i + j + k) % 46 == 0) {
            ans += (ll)an[i] * bn[j] * cn[k];
        }
    }
    cout << ans << endl;
    return 0;
}
