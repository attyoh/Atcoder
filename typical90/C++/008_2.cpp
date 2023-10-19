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
    vector<mint> dp(8);
    dp[0] = 1;
    for (char c : s) rep(i,7) if(c == st[i]) {
        dp[i+1] += dp[i];
    }
    cout << dp[7].val() << endl;
    return 0;
}