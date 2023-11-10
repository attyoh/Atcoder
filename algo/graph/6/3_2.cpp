// 木の高さ（BFS）
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
    queue<int> q;
    q.push(0);
    while(!q.empty()) {
        int v = q.front(); q.pop();
        seen[v] = 1;
        for (int nv : G[v]) {
            if (seen[nv]) continue;
            dist[nv] = dist[v] + 1;
            q.push(nv);
        }
    }

    int ans = *max_element(dist.begin(), dist.end());
    cout << ans << endl;
    return   0;
}