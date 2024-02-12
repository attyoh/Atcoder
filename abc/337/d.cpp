#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int h, w, k;
    cin >> h >> w >> k;
    vector<string> s(h);
    rep(i,h) cin >> s[i];

    const int INF = 100100100;
    auto solve = [&](string s) {
        int res = INF;
        int n = s.size();
        int xs = 0, es = 0, len = 0;
        rep(i,n) {
            xs += s[i]=='x';
            es += s[i]=='.';
            len++;
            if (len > k) {
                xs -= s[i-k]=='x';
                es -= s[i-k]=='.';
                len--;
            }
            if (len == k && xs == 0) {
                res = min(res, es);
            }
        }
        return res;
    };

    int ans = INF;
    rep(ri,2) {
        rep(i,h) ans = min(ans, solve(s[i]));
        {
            vector<string> t(w, string(h, '.'));
            rep(i,h) rep(j,w) t[j][i] = s[i][j];
            swap(h,w);
            s = t;
        }
    }
    cout << (ans == INF ? -1 : ans) << endl;
    return 0;
}