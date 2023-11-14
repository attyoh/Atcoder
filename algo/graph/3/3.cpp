#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using P = pair<int, int>;

const int di[] = {1,0,-1,0};
const int dj[] = {0,1,0,-1};

int main() {
    int h, w, sx, sy, gx, gy;
    cin >> h >> w >> sx >> sy >> gx >> gy;
    vector<string> s(h);
    rep(i,h) cin >> s[i];

    auto isValid = [&](int ni, int nj) {
        return (0 <= ni && ni < h && 0 <= nj && nj < w && s[ni][nj] == 'W');
    };

    vector<vector<int>> dist(h, vector<int>(w, -1));
    dist[sx][sy] = 0;
    auto bfs = [&](P sv) {
        queue<P> q;
        q.push(sv);
        while(!q.empty()) {
            auto [a,b] = q.front(); q.pop();
            rep(i,4) {
                int nx = a+di[i], ny = b+dj[i];
                if (!isValid(nx, ny) || dist[nx][ny] != -1) continue;
                dist[nx][ny] = dist[a][b] + 1;
                q.push({nx,ny});
            }
        }
    };
    bfs({sx,sy});

    cout << dist[gx][gy] << endl;
    return 0;
}