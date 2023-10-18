#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int n;
    cin >> n;

    vector<vector<int>> to(n);
    rep(i,n-1) {
        int a, b;
        cin >> a >> b;
        --a; --b;
        to[a].push_back(b);
        to[b].push_back(a);
    }

    auto bfs = [&](int sv) {
        const int INF = 1001001001;
        vector<int> dist(n, INF);
        queue<int> q;
        q.push(sv); dist[sv] = 0;

        while(!q.empty()) {
            int v = q.front(); q.pop();
            for (int u : to[v]) {
                if (dist[u] != INF) continue;
                dist[u] = dist[v] + 1;
                q.push(u);
            }
        }
        return dist;
    };

    auto dist0 = bfs(0);
    int mxidx = distance(dist0.begin(), max_element(dist0.begin(), dist0.end()));
    auto distmx = bfs(mxidx);
    int ans = *max_element(distmx.begin(), distmx.end()) + 1;
    cout << ans << endl;
    return 0;
}