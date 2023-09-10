#include <bits/stdc++.h>
#include <atcoder/all>
using namespace atcoder;
using namespace std;
using ll = long long;
using mint = modint1000000007;

ll mod = 1000000007;

long long modPow (int a, long long b) {
    int ans = 1;
    while (b != 0) {
        if (b % 2 == 1) {
            ans = (long long)(ans)*a % mod;
        }
        a = (long long)(a)*a % mod;
        b /= 2;
    }
    return ans;
}

int main() {
    ll n, k;
    cin >> n >> k;

    mint ans = k;
    if (k == 1) {
        cout << (n == 1 ? 1 : 0) << endl;
    } else if (n == 1) {
        cout << ans.val() << endl;
    } else if (n == 2) {
        ans *= (k-1);
        cout << ans.val() << endl;
    } else {
        ans *= (k-1) * modPow(k-2, n-2);
        cout << ans.val() << endl;
    }
    return 0;
}