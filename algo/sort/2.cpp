#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int n; cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];

    rep(i,n-1) {
        auto itr = min_element(a.begin()+i, a.end());
        swap(a[i], *itr);
        rep(i,n) cout << a[i] << (i!=n-1 ? ' ' : '\n');;
    }
    return 0;
}