#include <bits/stdc++.h>
#include <atcoder/all>
using namespace atcoder;
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

const int di[] = {1,0,-1,0,1,-1,-1,1};
const int dj[] = {0,1,0,-1,1,1,-1,-1};

int main() {
    int h, w;
    cin >> h >> w;

    vector<string> s(h);
    rep(i,h) cin >> s[i];

    auto is_valid = [&](int x, int y) {
        return (x >= 0 && x < h && y >= 0 && y < w && s[x][y] == '#');
    };
    
    int n = h*w;
    dsu uf(n);
    int ans = 0;
    rep(i,h) rep(j,w) {
        if (s[i][j] != '#') continue;
        ans++;
        rep(k,8) {
            int ni = i+di[k], nj = j+dj[k];
            int x = i*w+j, y = ni*w+nj;
            if (!is_valid(ni,nj)) continue;
            if (uf.same(x,y)) continue;
            uf.merge(x,y);
            ans--;
        }
    }
    cout << ans << endl;
    return 0;
}