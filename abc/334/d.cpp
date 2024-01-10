#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n, q;
  cin >> n >> q;

  vector<ll> r(n), s(n+1);
  rep(i,n) cin >> r[i];
  sort(r.begin(), r.end());
  rep(i,n) s[i+1] += s[i] + r[i];

  rep(i,q) {
    ll x; cin >> x;
    ll ans = upper_bound(s.begin(), s.end(), x) - s.begin() - 1;
    cout << ans << '\n';
  }
  return 0;
}
