#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll a, b, c;
  cin >> a >> b >> c;
  ll g = gcd(a, gcd(b,c));
  ll ans = (a/g-1) + (b/g-1) + (c/g-1);
  cout << ans << endl;
  return 0;
}