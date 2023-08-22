#include <bits/stdc++.h>
#include <atcoder/all>
using namespace atcoder;
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;
using mint = modint1000000007;

int main() {
    int n; cin >> n;
    mint ans = 0;
    rep(i,n) {
        int t, tmp = 0;
        rep(j,6) {
            cin >> t;
            tmp += t;
        }
        ans *= tmp;
    }
    cout << ans.val() << endl;
    return 0;
}