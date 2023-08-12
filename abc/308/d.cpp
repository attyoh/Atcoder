#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define nrep(i,s,n) for(int i = (s); i < (n); ++i)
using P = pair<int, int>;
using ll = long long;

const int di[] = {1,0,-1,0};
const int dj[] = {0,1,0,-1};

int main() {
  int h, w;
  cin >> h >> w;
  vector<string> s(h);
  rep(i,h) cin >> s[i];

  string T = "snukes";
  map<char,char> mp;
  rep(i,5) mp[T[i]] = T[i+1];

  queue<P> q;
  vector<vector<bool>> visited(h, vector<bool>(w));
  if (s[0][0]=='s') {
    visited[0][0] = true;
    q.emplace(0,0);
  }

  while(!q.empty()) {
    auto [i,j] = q.front(); q.pop();
    rep(v,4) {
      int ni = i+di[v], nj = j+dj[v];
      if (ni<0 || nj<0 || ni>=h || nj>=w) continue;
      if (s[ni][nj] != mp[s[i][j]]) continue;
      if (visited[ni][nj]) continue;
      visited[ni][nj] = true;
      q.emplace(ni,nj);
    }
  }

  cout << (visited[h-1][w-1] ? "Yes" : "No") << endl;
  return 0;
}