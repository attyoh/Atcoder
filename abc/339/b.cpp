#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

const int di[] = {-1,0,1,0};
const int dj[] = {0,1,0,-1};

int main() {
    int h, w, n;
    cin >> h >> w >> n;

    vector<string> s(h, string(w, '.'));
    int x = 0, y = 0, v = 0;
    rep(i,n) {
        if (s[y][x] == '.') {
            s[y][x] = '#';
            v += 1;
        } else {
            s[y][x] = '.';
            v += 3;
        }
        v %= 4;
        y += di[v], x += dj[v];
        y = (y+h)%h;
        x = (x+w)%w;
    }
    rep(i,h) cout << s[i] << endl;
    return 0;
}