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

    vector<int> dist(n, -1);
    auto bfs = [&](int sv) {
        queue<int> q;
        q.push(sv); dist[sv] = 0;
        while(!q.empty()) {
            int v = q.front(); q.pop();
            for (int nv : G[v]) {
                if (dist[nv] != -1) continue;
                dist[nv] = dist[v] + 1;
                q.push(nv);
            }
        }
    };
    bfs(0);

    int mx = *max_element(dist.begin(), dist.end());
    cout << mx << endl;
    return 0;
}
