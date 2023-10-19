#include <bits/stdc++.h>
#include <atcoder/all>
using namespace atcoder;
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using mint = modint1000000007;

int main() {
    int n; string s;
    cin >> n >> s;

    string st = "atcoder";
    vector<vector<mint>> dp(n+1, vector<mint>(8));
    dp[0][0] = 1;

    rep(i,n) rep(j,8) {
        dp[i + 1][j] += dp[i][j];
        if (s[i] == st[j]) dp[i + 1][j + 1] += dp[i][j];
    }
    cout << dp[n][7].val() << endl;
    return 0;
}