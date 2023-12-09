#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<ll> x(n);
    rep(i,n) cin >> x[i];

    auto f = [&](ll k) {
        return k*(k+1)/2;
    };

    auto bs = [&](ll key) {
        ll left = -1, right = 2e9;
        while(abs(right - left) > 1) {
            ll mid = (left + right) / 2;
            if (f(mid) >= key) right = mid;
            else left = mid;
        }
        return right;
    };

    rep(i,n) cout << bs(x[i]) << endl;
    return 0;
}