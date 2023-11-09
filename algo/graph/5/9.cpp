#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> G(n);
    vector<int> deg(n);
    for (int i=0; i<m; i++) {
        int a, b;
        cin >> a >> b;
        G[b].push_back(a);
        deg[a]++;
    }

    queue<int> q;
    rep(i,n) {
        if (deg[i]==0) q.push(i);
    }

    vector<int> ans;
    while(!q.empty()) {
        int v = q.front();
        q.pop();
        ans.push_back(v);
        for (int nv : G[v]) {
            deg[nv]--;
            if (deg[nv]==0) q.push(nv);
        }
    }

    cout << (ans.size() == n ? "Yes" : "No") << endl;
    return 0;
}