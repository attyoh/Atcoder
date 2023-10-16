#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define nrep(i,s,n) for(int i = (s); i >= (n); --i)

int main() {
    int n, m;
    cin >> n >> m;
    vector<bool> f(n);
    rep(i,m) {
        int a;
        cin >> a;
        f[a-1] = true;
    }

    vector<int> ans(n);
    nrep(i,n-1,0) {
        if (f[i]) ans[i] = 0;
        else ans[i] = ans[i+1] + 1;
    }
    rep(i,n) cout << ans[i] << endl;
    return 0;
}