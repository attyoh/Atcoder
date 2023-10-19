#include <bits/stdc++.h>
#include <atcoder/all>
using namespace atcoder;
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

bool vis [2010][2010];
const int d[5] = {0,-1,0,1,0};

int main() {
    int h, w, Q;
    cin >> h >> w >> Q;
    
    dsu uf((h+2)*(w+2));
    rep(i,Q) {
        int q;
        cin >> q;
        if (q == 1) {
            int x, y;
            cin >> x >> y;
            vis[x][y] = true;
            rep(r,4) {
                int nx = x+d[r], ny = y+d[r+1];
                if (vis[nx][ny]) uf.merge(x*(w+2)+y, nx*(w+2)+ny);
            }
        } else {
            int a, b, c, d;
            cin >> a >> b >> c >> d;
            cout << (vis[a][b] && uf.same(a*(w+2)+b, c*(w+2)+d) ? "Yes" : "No") << '\n';
        }
    }
    return 0;
}