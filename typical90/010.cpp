#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n; cin >> n;
  vector<int> c1(n+1), c2(n+1);

  rep(i,n) {
    int c, p;
    cin >> c >> p;
    if (c==1) c1[i+1] = p;
    else c2[i+1] = p;
  }

  auto csum = [&](vector<int> v) {
    rep(i,n-1) v[i+1] += v[i];
    return v;
  };

  c1 = csum(c1);
  c2 = csum(c2);

  for(auto e : c1) cout << e << ' ';
  cout << endl;

  int q; cin >> q;
  rep(i,q) {
    int l, r;
    cin >> l >> r;
    printf("%d %d", c1[r]-c1[l-1], c2[r]-c2[l-1]);
  }
  return 0;
}