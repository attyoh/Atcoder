#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    rep(i,n-1) cout << a[i]*a[i+1] << (i!=n-2 ? ' ' : '\n');;
    return 0;
}