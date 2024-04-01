#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    rep(i,n) cin >> a[i];

    set<int> st;
    rep(i,n) st.insert(a[i]);

    ll ans = ll(1+k)*k/2;
    for (auto& e : st) {
        if (e <= k) ans -= e;
    }
    cout << ans << endl;
    return 0;
}