// s-tの存在判定
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, s, t;
    cin >> n >> m >> s >> t;
    vector<vector<int>> G(n);
    for (int i=0; i<m; i++) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
    }

    vector<bool> seen(n);
    auto dfs = [&](auto dfs, int v) -> void {
        seen[v] = true;
        for (int e : G[v]) {
            if (seen[e]) continue;
            dfs(dfs,e);
        }
    };
    
    dfs(dfs,s);
    cout << (seen[t] ? "Yes" : "No") << endl;
}