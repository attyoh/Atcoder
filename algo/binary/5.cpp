#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];

    sort(a.begin(), a.end());

    ll ans = 0;
    auto bs = [&](ll key) {
        ll left = -1, right = n;
        while(abs(right - left) > 1) {
            ll mid = (left + right) / 2;
            if (a[mid] >= key) right = mid; 
            else left = mid;
        }
        return n - right;
    };

    rep(i,n) {
        ans += bs(k-a[i]);
    }
    cout << ans << endl;
    return 0;
}