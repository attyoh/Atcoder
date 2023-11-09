// 木の高さ（DFS)
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

    vector<int> seen(n), dist(n);
    auto dfs = [&](auto dfs, int v) -> void {
        seen[v] = 1;
        for (int nv : G[v]) {
            if (seen[nv]) continue;
            dist[nv] = dist[v] + 1;
            dfs(dfs,nv);
        }
    };
    dfs(dfs,0);

    int ans = *max_element(dist.begin(), dist.end());
    cout << ans << endl;
    return   0;
}