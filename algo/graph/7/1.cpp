#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define nrep(i, s, n) for (int i = (s); i < (n); ++i)

const int INF = 1001001001;

int main() {
    int n; cin >> n;
    vector<int> a(n-1), b(n-2), dist(n,INF);
    rep(i,n-1) cin >> a[i];
    rep(i,n-2) cin >> b[i];

    dist[0] = 0;
    nrep(i,1,n) {
        dist[i] = dist[i-1] + a[i-1];
        if (i < 2) continue;
        dist[i] = min(dist[i], dist[i-2] + b[i-2]);
    }
    cout << dist[n-1] << endl;
    return 0;
}
