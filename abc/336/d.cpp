#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define nrep(i,s,n) for(int i = (s); i < (n); ++i)

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    a.push_back(0);
    a.insert(a.begin(),0);
    n += 2;

    for (int i=1; i<n-1; i++) {
        a[i] = min(a[i], a[i-1]+1);
    }
    for (int i=n-2; i>0; i--) {
        a[i] = min(a[i], a[i+1]+1);
    }

    int ans = 0;
    rep(i,n) ans = max(ans, a[i]);
    cout << ans << endl;
    return 0;
}