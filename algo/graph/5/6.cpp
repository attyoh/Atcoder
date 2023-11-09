// トポロジカルソート
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> G(n);
    for (int i=0; i<m; i++) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
    }

    for (int i=0; i<n; i++) {
        sort(G[i].begin(), G[i].end());
    }

    vector<int> seen(n), ans;
    auto dfs = [&](auto dfs, int v) -> void {
        seen[v] = 1;
        for (int e : G[v]) {
            if (seen[e]) continue;
            dfs(dfs,e);
        }
        ans.push_back(v);
    };
    
    for (int i=0; i<n; i++) {
        if (seen[i]) continue;
        dfs(dfs,i);
    }
    reverse(ans.begin(),ans.end());

    for (int e : ans) cout << e << ' ';
}