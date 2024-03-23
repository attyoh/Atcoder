#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    ll n, m, l, q;

    cin >> n;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];

    cin >> m;
    vector<ll> b(m);
    rep(i,m) cin >> b[i];

    cin >> l;
    vector<ll> c(l);
    rep(i,l) cin >> c[i];

    cin >> q;
    vector<ll> x(q);
    rep(i,q) cin >> x[i];

    unordered_set<ll> sums;
    rep(i,n) rep(j,m) rep(k,l) {
        sums.insert(a[i] + b[j] + c[k]);
    }

    for (ll i = 0; i < q; ++i) {
        cout << (sums.count(x[i]) ? "Yes" : "No") << '\n';
    }
    return 0;
}