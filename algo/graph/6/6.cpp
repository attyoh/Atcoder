#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

class Tree {
public:
    Tree(int n, vector<vector<int>>& G) : n(n), G(G) {}

    // グラフの直径
    int getDiameter() {
        vector<int> dist(n, -1), dist_mx(n, -1);

        bfs(0, dist);
        int mx = max_element(dist.begin(), dist.end()) - dist.begin();
        bfs(mx, dist_mx);

        return *max_element(dist_mx.begin(), dist_mx.end());
    }

private:
    int n;
    vector<vector<int>>& G;

    void bfs(int v, vector<int>& dist) {
        dist[v] = 0;
        queue<int> q;
        q.push(v);
        while (!q.empty()) {
            int u = q.front(); q.pop();
            for (int nu : G[u]) {
                if (dist[nu] != -1) {continue;}
                dist[nu] = dist[u] + 1;
                q.push(nu);
            }
        }
    }
};

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

    Tree tree(n,G);
    int ans = (tree.getDiameter() + 1) / 2;
    cout << ans << endl;
    return 0;
}