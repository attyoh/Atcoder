#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    int n, q;
    string s;
    cin >> n >> q >> s;

    vector<int> count(n + 1, 0);
    rep(i, n) {
        count[i+1] = count[i] + (s[i] == s[i+1]);
    }

    rep(i, q) {
        int l, r;
        cin >> l >> r;
        cout << count[r-1] - count[l-1] << "\n";
    }

    return 0;
}
