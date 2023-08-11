#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using P = pair<int, int>;

const int di[] = {1,0,-1,0};
const int dj[] = {0,1,0,-1};

int main() {
  int h, w;
  cin >> h >> w;
  vector<string> s(h);
  rep(i,h) cin >> s[i];

  vector<vector<bool>> visited(h, vector<bool>(w));
  vector<vector<bool>> passed(h, vector<bool>(w));
  queue<P> q; q.emplace(1,1); 
  visited[1][1] = passed[1][1] = true;
  while(!q.empty()) {
    auto [i,j] = q.front(); q.pop();
    rep(v,4) {
      int ni = i, nj = j;
      while(s[ni][nj]=='.') {
        passed[ni][nj] = true;
        ni += di[v]; nj += dj[v];
      }
      ni -= di[v]; nj -= dj[v];
      if (visited[ni][nj]) continue;
      visited[ni][nj] = true;
      q.emplace(ni,nj);
    }
  }

  int ans = 0;
  rep(i,h) rep(j,w) if (passed[i][j]) ans++;
  cout << ans << endl;
  return 0;
}