#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int n; cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];

    bool flag = true;
    while (flag) {
        flag = false;
        rep(i,n-1) if(a[i] > a[i+1]) {
            swap(a[i], a[i+1]);
            flag = true;
        }
        if (flag) rep(i,n) cout << a[i] << (i!=n-1 ? ' ' : '\n');
    }
    return 0;
}