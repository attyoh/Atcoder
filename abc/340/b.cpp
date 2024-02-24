#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int q; cin >> q;

    vector<int> a;
    rep(qi,q) {
        int type, x;
        cin >> type >> x;
        if (type == 1) {
            a.push_back(x);
        } else {
            cout << a[a.size()-x] << endl;
        }
    }
    return 0;
}