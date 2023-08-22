#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using mint = modint1000000007;

int main() {
    int n, l;
    cin >> n >> l;
    vector<mint> dp(n+1);
    dp[0] = 1;
    rep(i,n) {
        dp[i+1] += dp[i];
        if (i+1-l >= 0) dp[i+1] += dp[i+1-l];
    }
    cout << dp[n].val() << endl;
    return 0;
}