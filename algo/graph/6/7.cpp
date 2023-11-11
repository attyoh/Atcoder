#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

class Tree {
public:
    Tree(int n, vector<vector<int>>& G) : n(n), G(G) {}

    // 根をvとした時の根付き木に変更
    vector<vector<int>> getRootTree(int r) {
        vector<vector<int>> children(n);
        rootBfs(r, children);
        return children;
    }

private:
    int n;
    vector<vector<int>>& G;

    // rootTree_BFS
    void rootBfs(int r, vector<vector<int>>& children) {
        vector<bool> seen(n);
        queue<int> q;
        q.push(r);
        seen[r] = true;

        while (!q.empty()) {
            int v = q.front(); q.pop();
            for (int nv : G[v]) {
                if (seen[nv]) {continue;}
                children[v].push_back(nv);
                seen[nv] = true;
                q.push(nv);
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
    auto children = tree.getRootTree(0);

    vector<bool> is(n);
    auto dfs = [&](auto dfs, int v) -> void {
        bool flg = false;
        for (int nv : children[v]) {
            dfs(dfs,nv);
            flg |= is[nv];
        }
        is[v] = !flg;
    };
    dfs(dfs,0);

    int ans = 0;
    rep(i,n) if(is[i]) ans++;
    cout << ans << endl;
    return 0;
}