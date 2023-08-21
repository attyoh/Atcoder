#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int n, m;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    rep(i,n) rep(j,n) {
        cin >> a[i][j];
    }

    cin >> m;
    vector<int> x(m), y(m);
    rep(i,m) cin >> x[i] >> y[i];

    rep(i,m) x[i]--;
    rep(i,m) y[i]--;

    vector<vector<bool>> bad(n, vector<bool>(n));
    rep(i,m) {
        bad[x[i]][y[i]] = true;
        bad[y[i]][x[i]] = true;
    }

    int ans = 1 << 30;
    vector<int> vec;
    rep(i,n) vec.push_back(i);


    do{
        bool flag = true;
        int cnt = 0;
        rep(i,n-1) {
            if (bad[vec[i]][vec[i+1]]) flag = false;
        }
        rep(i,n) cnt += a[vec[i]][i];
        if (flag) ans = min(ans, cnt);
    } while(next_permutation(vec.begin(), vec.end()));

    cout << (ans==1<<30 ? -1 : ans) << endl;
    return 0;
}