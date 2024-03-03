#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    ll n, m, k;
    cin >> n >> m >> k;
    ll l = lcm(n,m);

    auto f = [&](ll x) {
        ll res = x/n + x/m - x/l*2;
        return res >= k;
    };
    
    ll wa = 0, ac = 1e18;
    while(ac-wa > 1) {
        ll wj = (wa+ac)/2;
        if (f(wj)) ac = wj;
        else wa = wj;
    }
    cout << ac << endl;
    return 0;
}
