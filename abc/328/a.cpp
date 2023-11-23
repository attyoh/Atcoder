#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    int n, x;
    cin >> n >> x;

    int ans = 0;
    rep(i, n) {
        int s;
        cin >> s;
        if (s <= x) ans += s;
    }
    cout << ans << endl;
    
    return 0;
}
