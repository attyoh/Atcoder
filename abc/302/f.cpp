#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n, m;
  cin >> n >> m;  
  vector<vector<int>> to(n+m);
  rep(i,n) {
    int a;
    cin >> a;
    rep(j,a) {
      int x;
      cin >> x;
      --x;
      to[x].push_back(m+i);
      to[m+i].push_back(x);
    }
  }

  const int INF = 1e9;
  vector<int> dist(n+m,INF);
  queue<int> q;
  dist[0] = 0; q.push(0);
  while(q.size()) {
    int v = q.front(); q.pop();
    for(int u : to[v]) {
      if (dist[u] != INF) continue;
      dist[u] = dist[v]+1;
      q.push(u);
    }
  }
  int ans = dist[m-1];
  if (ans == INF) ans = -1;
  else ans = (ans-2) / 2;
  cout << ans << endl;
  return 0;
}
