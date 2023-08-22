#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    ll n, q;
	cin >> n >> q;
    vector<ll> a(n), b(n);
	rep(i,n) cin >> a[i];

	ll ans = 0;
	rep(i,n-1) {
		b[i] = a[i+1] - a[i];
		ans += abs(b[i]);
	}
	
	rep(i,q) {
        ll l, r, v;
        cin >> l >> r >> v;
        --l; --r;
		ll mae = abs(b[l-1]) + abs(b[r]);
		if (l > 0) b[l-1] += v;
		if (r < n-1) b[r] -= v;
		ll ato = abs(b[l-1]) + abs(b[r]);
		ans += (ato - mae);
		cout << ans << endl;
	}
	return 0;
}