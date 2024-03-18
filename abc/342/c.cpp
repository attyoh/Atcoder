#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int n, q;
    string s;
    cin >> n >> s >> q;

    string t = "abcdefghijklmnopqrstuvwxyz";
    rep(qi,q) {
        char c, d;
        cin >> c >> d;
        rep(i,26) {
            if (c == t[i]) t[i] = d;
        }
    }

    rep(i,n) {
        int j = s[i] - 'a';
        s[i] = t[j];
    }
    cout << s << endl;
    return 0;
}