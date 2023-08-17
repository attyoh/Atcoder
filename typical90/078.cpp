#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n; cin >> n;
  vector<int> a(n+1), b(n+1);
  rep(i,n) {
    int c, p;
    cin >> c >> p;
    if (c==1) a[i+1] = p;
    else b[i+1] = p;
  }
  rep(i,n) a[i+1] += a[i];
  rep(i,n) b[i+1] += b[i];

  int q; cin >> q;
  rep(i,q) {
    int l, r;
    cin >> l >> r;
    cout << a[r]-a[l-1] << ' ';
    cout << b[r]-b[l-1] << endl;
  }
  return 0;
}
