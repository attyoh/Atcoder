#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

class Tree {
public:
    Tree(int n, vector<vector<int>>& G) : n(n), G(G) {}

    void getRootTree(int r, vector<vector<int>>& children, vector<int>& parents, vector<bool>& is) {
        rootBfs(r, children, parents);
        postorder(r, children, parents, is);
    }

private:
    int n;
    vector<vector<int>>& G;

    // 帰りがけ順DFS
    void postorder(int v, vector<vector<int>>& children, vector<int>& parents, vector<bool>& is) {
        for (auto nv : children[v]) {
            postorder(nv, children, parents, is);
        }
        if (parents[v] == -1) return;
        if (!is[v] && !is[parents[v]]) {
            is[v] = is[parents[v]] = true;
        }
    }

    // rootTree_BFS
    void rootBfs(int r, vector<vector<int>>& children, vector<int>& parents) {
        vector<bool> seen(n);
        queue<int> q;
        q.push(r);
        seen[r] = true;

        while (!q.empty()) {
            int v = q.front(); q.pop();
            for (int nv : G[v]) {
                if (seen[nv]) {continue;}
                children[v].push_back(nv);
                parents[nv] = v;
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
    
    vector<int> parents(n,-1);
    vector<bool> ismatch(n);
    vector<vector<int>> children(n);
    Tree tree(n,G);
    tree.getRootTree(0, children, parents, ismatch);
    
    int ans = 0;
    rep(i,n) if (ismatch[i]) ans++;
    cout << ans/2 << endl;
    return 0;
}