#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int n;
    cin >> n;
    vector<int> p(n);
    rep(i,n) cin >> p[i];

    vector<int> d(n+1);
    rep(i,n) d[p[i]] = i;

    int q;
    cin >> q;
    rep(qi,q) {
        int a, b;
        cin >> a >> b;
        cout << (d[a] < d[b] ? a : b) << endl;
    }
    return 0;
}