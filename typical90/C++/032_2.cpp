#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using P = pair<int, int>;

int main() {
    int n; cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    rep(i,n) rep(j,n) {cin >> a[i][j];}

    int m; cin >> m;
    set<P> st;
    rep(i,m) {
        int x, y;
        cin >> x >> y;
        --x, --y;
        st.emplace(x,y);
        st.emplace(y,x);
    }

    vector<int> vec(n);
    rep(i,n) vec[i] = i;

    int ans = 1<<30;
    sort(vec.begin(), vec.end());
    do{
        bool ok = true;
        int cnt = 0;
        rep(i,n-1) {
            if (st.count(P(vec[i],vec[i+1]))) ok = false;
        }
        rep(i,n) cnt += a[vec[i]][i];
        if (ok) ans = min(ans, cnt);
    } while(next_permutation(vec.begin(), vec.end()));
    cout << (ans==1<<30 ? -1 : ans) << endl;
    return 0;
}