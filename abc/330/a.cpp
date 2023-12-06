#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int n, l;
    cin >> n >> l;

    int ans = 0;
    rep(i, n) {
        int a;
        cin >> a;
        if (a >= l) ++ans;
    }

    cout << ans << endl;
    return 0;
}
