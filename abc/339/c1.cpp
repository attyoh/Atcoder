#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    int n;
    cin >> n;

    ll y = 0, l = 0;
    rep(i,n) {
        int a; cin >> a;
        y += a;
        l = min(y,l);
    }
    cout << y - l << endl;
    return 0;
}