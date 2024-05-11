#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    vector<int> a(9), b(8);
    rep(i,9) cin >> a[i];
    rep(i,8) cin >> b[i]; 
    
    int ans = 1;
    rep(i,9) {
        ans += a[i];
        ans -= b[i];
    }
    cout << ans << endl;
    return 0;
}