#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define nrep(i,s,n) for(int i = (s); i < (n); ++i)

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> f(n);
    vector<int> deg(n);
    rep(i,m) {
        int a, b;
        cin >> a >> b;
        f[a].push_back(b);
        deg[b]++;
    }

    queue<int> q;
    int num = 0;
    rep(i,n) if(deg[i]==0) {
        q.push(i);
        num++;
    }

    while(!q.empty()) {
        int v = q.front(); q.pop();
        for (int nv : f[v]) {
            deg[nv]--;
            if (deg[nv]==0) {
                q.push(nv);
                num++;
            }
        }
    }

    cout << (num==n ? "Yes" : "No") << endl;
    return 0;
}