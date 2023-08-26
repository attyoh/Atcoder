#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    int n; string s;
    cin >> n >> s;

    vector<int> a(n+1), b(n+1);
    ll ans = 0;
    rep(i,n) {
        if (s[i] == 'o') {
            a[i+1] = i+1;
            b[i+1] = b[i];
        } else {
            a[i+1] = a[i];
            b[i+1] = i+1;
        }
        ans += min(a[i+1], b[i+1]);
    }
    cout << ans << endl;
    return 0;
}