#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    ll n, k;
    cin >> n >> k;
    
    ll ans = 0;
    rep(i,n) ans += min(n, k/(i+1));
    cout << ans << endl;
    return 0;
}