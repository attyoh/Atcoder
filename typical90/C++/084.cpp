#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using P = pair<char, int>;
using ll = long long;

int main() {
    ll n; string s;
    cin >> n >> s;

    ll cnt = 0;
    vector<P> vp;
    rep(i,n) {
        cnt++;
        if (i == n || s[i] != s[i+1]) {
            vp.emplace_back(s[i], cnt);
            cnt = 0;
        }
    }

    ll ans = n*(n+1)/2;
    rep(i,vp.size()) {
        ll m = vp[i].second;
        ans -= m*(m+1) / 2;
    } 

    cout << ans << endl;
    return 0;
}