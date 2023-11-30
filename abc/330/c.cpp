#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    ll d;
    cin >> d;

    ll ans = LLONG_MAX;
    for (ll x = 0; x * x <= d; ++x) {
        ll y = sqrt(max(0LL, d - x*x));
        ans = min(ans, abs(x*x + y*y - d));
        ans = min(ans, abs(x*x + (y+1)*(y+1) - d));
    }

    cout << ans << endl;
    return 0;
}
