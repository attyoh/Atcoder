#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int n;
    cin >> n;

    int i = 0, j = 0, num = 1;
    vector<vector<int>> ans(n, vector<int>(n,-1));
    auto f = [&](int di, int dj) {
        ans[i][j] = num++;
        i += di; j += dj;
    };

    for (int i = n-1; i > 0; i -= 2) {
        rep(j,i) f(0,1);
        rep(j,i) f(1,0);
        rep(j,i) f(0,-1);
        rep(j,i-1) f(-1,0);
        f(0,1);
    }

    rep(i,n) {
        rep(j,n) {
            if (ans[i][j] == -1) cout << 'T' << ' ';
            else cout << ans[i][j] << ' ';
        } cout << endl;
    }
    return 0;
}