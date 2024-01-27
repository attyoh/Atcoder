#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int n;
    cin >> n;

    int l = 0, r = 0;
    rep(i,n) {
        int x, y;
        cin >> x >> y;
        l += x;
        r += y;
    }

    if (l > r) cout << "Takahashi" << endl;
    if (l < r) cout << "Aoki" << endl;
    if (l == r) cout << "Draw" << endl;
    return 0;
}