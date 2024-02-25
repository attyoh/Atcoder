#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<ll, int>;

int main() {
    int n, x;
    cin >> n;
    ll a, b;

    vector<vector<P>> g(n);
    rep(i,n-1) {
        cin >> a >> b >> x;
        x--;
        g[i].emplace_back(i+1,a);
        g[i].emplace_back(x,b);
    }

    const ll INF = 1e18;
    vector<ll> dist(n, INF);
    priority_queue<P, vector<P>, greater<P>> q;
    dist[0] = 0;
    q.emplace(0,0);

    while(!q.empty()) {
        auto [d,v] = q.top(); q.pop();
        for(auto e : g[v]) {
            ll nd = d+e.second;
            if (nd >= dist[e.first]) continue;
            dist[e.first] = nd;
            q.emplace(nd, e.first);
        }
    }

    cout << dist[n-1] << endl;
    return 0;
}