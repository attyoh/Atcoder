#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    rep(i,n) cin >> a[i];

    int shift = 0;
    rep(i,q) {
        int t, x, y;
        cin >> t >> x >> y;
        x--; y--;
        
        if (t == 1) {
            swap(a[(x+shift)%n], a[(y+shift)%n]);
        } else if (t == 2) {
            shift = (shift+n-1)%n;
        } else if (t == 3) {
            cout << a[(x+shift)%n] << endl;
        }
    }
    return 0;
}
