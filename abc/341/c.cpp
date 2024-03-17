#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int h, w, n; string t;
    cin >> h >> w >> n >> t;
    vector<string> s(h);
    rep(i,h) cin >> s[i];

    int ans = 0;
    rep(si,h) rep(sj,w) {
        if (s[si][sj] == '#') continue;
        int i = si, j = sj;
        bool ok = true;
        for (char c : t) {
            if (c == 'L') j--;
            if (c == 'R') j++;
            if (c == 'U') i--;
            if (c == 'D') i++;
            if (s[i][j] == '#') {
                ok = false;
                break;
            }
        } 
        if (ok) ans++;
    }
    cout << ans << endl;
    return 0;
}
