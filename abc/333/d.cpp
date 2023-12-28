#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int n; cin >> n;
    
    vector<vector<int>> G(n);
    rep(i,n-1) {
        int a, b;
        cin >> a >> b;
        --a; --b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    int ans = n;
    for (int e : G[0]) {
        auto f = [&](auto f, int v, int p) -> int {
            int res = 1;
            for (int u : G[v]) {
                if (u==p) continue;
                res += f(f,u,v);
            }
            return res;
        };
        int now = n - f(f,e,0);
        ans = min(ans, now);
    }
    cout << ans << endl;
    return 0;
}