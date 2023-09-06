#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
	ll n, q;
	cin >> n >> q;
	vector<ll> a(n);
	rep(i,n) cin >> a[i];

	ll ans = 0;
	vector<ll> b(n);
	rep(i,n-1) {
		b[i] = a[i+1] - a[i];
		ans += abs(b[i]);
	}

	rep(i,q) {
		ll l, r, v;
		cin >> l >> r >> v;
		--l; --r;
		ll pre = abs(b[l-1]) + abs(b[r]);
		if (l > 0) b[l-1] += v;
		if (r < n-1) b[r] -= v;
		ll aft = abs(b[l-1]) + abs(b[r]);
		ans += aft - pre;
		cout << ans << endl;
	}
	return 0;
}