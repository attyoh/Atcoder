#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  int h, w, n;
  cin >> h >> w >> n;
  vector<vector<int>> dp(h, vector<int>(w,1));
  rep(i,n) {
    int a, b;
    cin >> a >> b;
    a--; b--;
    dp[a][b] = 0;
  }

  rep(i,h) rep(j,w) {
    if (dp[i][j] == 0) continue;
    if (!i || !j) continue;
    dp[i][j] = min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]}) + 1;
  }
  
  ll ans = 0;
  rep(i,h) rep(j,w) ans += dp[i][j];
  cout << ans << endl;
  return 0;
}