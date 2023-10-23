#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int cnt[1010][1010];

int main() {
    int n;
    cin >> n;

    rep(i,n) {
        int lx, ly, rx, ry;
        cin >> lx >> ly >> rx >> ry;
        cnt[lx][ly]++;
        cnt[rx][ry]++;
        cnt[lx][ry]--;
        cnt[rx][ly]--;
    }

    rep(i,1009) rep(j,1009) cnt[i][j+1] += cnt[i][j];
    rep(i,1009) rep(j,1009) cnt[i+1][j] += cnt[i][j];

    vector<int> ans(n+1);
    rep(i,1010) rep(j,1010) ans[cnt[i][j]]++;
    
    rep(i,n) cout << ans[i+1] << endl;
    return 0;
}