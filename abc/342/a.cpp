#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    string s, t;
    cin >> s;
    t = s;

    sort(t.begin(), t.end());
    char ans;
    if (t[0] != t[1]) ans = t[0];
    else ans = t[t.size()-1];

    rep(i,s.size()) {
        if (ans == s[i]) {
            cout << i+1 << endl;
        }
    }
    return 0;
}