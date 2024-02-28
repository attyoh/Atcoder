#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<ll> a(n), s(n-1), t(n-1);
    rep(i,n) cin >> a[i];
    rep(i,n-1) cin >> s[i] >> t[i];
    
    rep(i,n-1) {
        ll x = a[i] / s[i];
        a[i] -= s[i]*x;
        a[i+1] += t[i]*x;
    }
    
    cout << a[n-1] << endl;
    return 0;
}