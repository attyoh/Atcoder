#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  ll n, q;
  cin >> n >> q;
  
  vector<ll> r(n);
  rep(i,n) cin >> r[i];
  sort(r.begin(), r.end()); 

  vector<ll> s(n+1);
  rep(i,n) s[i+1] = s[i] + r[i];

  rep(i,q) {
    ll x; cin >> x;

    auto it = upper_bound(s.begin(), s.end(), x);
    int ans = distance(s.begin(), it) - 1;
    cout << ans << endl;
  }
  return 0;
}
