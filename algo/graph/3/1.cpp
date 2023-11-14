#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> G(n);
    rep(i,m) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    vector<vector<int>> ans(n);
    vector<int> dist(n, -1);
    dist[0] = 0;
    ans[0] = {0};
    auto bfs = [&](int sv) {
        queue<int> q;
        q.push(sv);
        while(!q.empty()) {
            int v = q.front(); q.pop();
            for (int nv : G[v]) {
                if (dist[nv] != -1) continue;
                dist[nv] = dist[v] + 1;
                q.push(nv);
                ans[dist[nv]].push_back(nv);
            }
        }
    };
    bfs(0);

    for (auto& e : ans) {
        sort(e.begin(), e.end());
        for (int a : e) cout << a << ' ';
        cout << endl;
    }
    return 0;
}
