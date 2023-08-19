#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int h, w; cin >> h >> w;
  vector<vector<int>> a(h, vector<int>(w));
  vector<int> row(h), col(w);
  rep(i,h) rep(j,w) cin >> a[i][j];
  
  rep(i,h) rep(j,w) {
    row[i] += a[i][j];
    col[j] += a[i][j];
  }
  
  rep(i,h) rep(j,w) {
    int ans = row[i] + col[j] - a[i][j];
    cout << ans << (j!=w-1 ? ' ' : '\n');;
  }
  return 0;
}