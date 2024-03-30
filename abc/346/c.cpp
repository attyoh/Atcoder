#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());

    ll ans = ll(1+k)*k/2;
    for(auto& x : a) {
        if (x <= k) ans -= x;
    }
    cout << ans << endl;
    return 0;
}