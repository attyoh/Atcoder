#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int n; cin >> n;
    vector<string> s(n);
    rep(i,n) cin >> s[i];

    vector<int> r(n), c(n);
    rep(i,n) rep(j,n) if (s[i][j] == 'o') {
        r[i]++; c[j]++;
    }

    ll ans = 0;
    rep(i,n) rep(j,n) if (s[i][j] == 'o') {
        ans += (r[i]-1 )* (c[j]-1);
    }
    cout << ans << endl;
    return 0;
}