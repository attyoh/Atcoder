#include <bits/stdc++.h>
#include <atcoder/all>
using namespace atcoder;
using namespace std;
#define nrep(i,s,n) for(int i = (s); i <= (n); ++i)
using mint = modint1000000007;

int main() {
    int k;
    cin >> k;

    if (k % 9 != 0) {
        cout << 0 << endl;
    } else {
        vector<mint> dp(k+1);
        dp[0] = 1;
        nrep(i,1,k) nrep(j,1,min(i,9)) {
            dp[i] += dp[i-j];
        }
        cout << dp[k].val() << endl;
    }
    return 0;
}