#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  ll n, p, q;
  cin >> n >> p >> q;
  vector<int> a(n);
  rep(i,n) cin >> a[i];

  ll ans = 0;
  rep(i,n) {
    rep(j,i) {
      rep(k,j) {
        rep(l,k) {
          rep(m,l) {
            if (a[i]%p * a[j]%p * a[k]%p * a[l]%p * a[m]%p == q) ans++;
          }
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}