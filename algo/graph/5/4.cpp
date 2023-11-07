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
        G[b].push_back(a);
    }

    vector<int> seen(n), color(n);
    string ans = "Yes";
    auto dfs = [&](auto dfs, int v, int col) -> void {
        seen[v] = 1;
        color[v] = col;
        for (int e : G[v]) {
            if (seen[e]) {
                if (color[e] == color[v]) ans = "No";
                continue;
            }
            dfs(dfs,e,3-col);
        }
    };
    
    for (int i=0; i<n; i++) {
        if (seen[i]) continue;
        dfs(dfs,i,1);
    }

    cout << ans << endl;
}