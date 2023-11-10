// 木の直径（DFS）
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int n;
    cin >> n;

    vector<vector<int>> G(n);
    rep(i,n-1) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    vector<int> dist(n);
    vector<bool> seen(n);
    auto dfs = [&](auto dfs, int v) -> void {
        seen[v] = true;
        for (int nv : G[v]) {
            if (seen[nv]) continue;
            dist[nv] = dist[v] + 1;
            dfs(dfs,nv);
        }
    };
    dfs(dfs,0);
    int mx = max_element(dist.begin(), dist.end()) - dist.begin();

    fill(dist.begin(), dist.end(), 0);
    seen.assign(n, false);
    dfs(dfs,mx);
    int ans = *max_element(dist.begin(), dist.end());
    cout << ans << endl;
    return 0;
}