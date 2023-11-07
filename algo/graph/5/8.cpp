// サイクル検出
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> G(n);
    for (int i=0; i<m; i++) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
    }

    vector<bool> seen(n), finished(n);
    string ans = "No";
    auto dfs = [&](auto dfs, int v) -> void {
        seen[v] = true;
        for (int e : G[v]) {
            if (seen[e]) {
                if (!finished[e]) ans = "Yes";
                continue;
            }
            dfs(dfs,e);
        }
        finished[v] = true;
    };
    
    rep(i,n) dfs(dfs,i);
    cout << ans << endl;
    return 0;
}