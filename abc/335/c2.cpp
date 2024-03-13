#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using P = pair<int, int>;

const int dx[] = {-1,0,1,0};
const int dy[] = {0,1,0,-1};

map<char,int> mp = {
    {'L',0},{'U',1},{'R',2},{'D',3}
};

int main() {
    int n, q;
    cin >> n >> q;
    deque<P> dq;
    rep(i,n) dq.emplace_back(i+1,0);

    rep(qi,q) {
        int type; cin >> type;
        if (type == 1) {
            char c; cin >> c;
            int v = mp[c];
            auto [x,y] = dq[0];
            dq.emplace_front(x+dx[v], y+dy[v]);
        } else {
            int p; cin >> p;
            auto [x,y] = dq[p-1];
            printf("%d %d\n", x, y);
        }
    }
    return 0;
}