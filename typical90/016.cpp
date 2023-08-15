#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  ll n, a, b, c;
  cin >> n >> a >> b >> c;
  ll ans = 1001001001;
  rep(i,10000) rep(j,10000) {
    ll v = n - a*i - b*j;
    ll r = i + j + v/c;
    if (v%c != 0 || v < 0 || r > 9999) continue;
    ans = min(ans, r);
  }
  cout << ans << endl;
  return 0;
}