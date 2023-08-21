#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n), b(n), vec;
    rep(i,n) {
        cin >> a[i] >> b[i];
        vec.push_back(b[i]);
        vec.push_back(a[i]-b[i]);
    }

    sort(vec.begin(), vec.end(), greater<int>());
    ll ans = 0;
    rep(i,k) ans += vec[i];
    cout << ans << endl;
    return 0;
}