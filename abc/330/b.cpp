#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int n, l, r;
    cin >> n >> l >> r;

    rep(i,n) {
        int a;
        cin >> a;
        cout << clamp(a,l,r) << (i!=n-1 ? ' ' : '\n');;
    }

    return 0;
}