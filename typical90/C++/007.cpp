#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n; cin >> n;
  vector<int> a(n);
  rep(i,n) cin >> a[i];
  sort(a.begin(), a.end());

  int q; cin >> q;
  rep(i,q) {
    int b; cin >> b;
    int id = lower_bound(a.begin(), a.end(), b) - a.begin();
    int id_1 = id-1;
    id = min(id,n-1);
    id_1 = max(0,id_1);
    int ans = min(abs(a[id]-b), abs(a[id_1]-b));
    cout << ans << endl;
  }
  return 0;
}