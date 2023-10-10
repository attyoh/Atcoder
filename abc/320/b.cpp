#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {

    auto isPalindrome = [&](string s) -> bool {
        string t = s;
        reverse(t.begin(), t.end());
        return s == t;
    };

    string s; cin >> s;
    int n = s.size();
    int ans = 0;
    rep(r,n) rep(l,r+1) {
        string ns = s.substr(l,r-l+1);
        if (isPalindrome(ns)) ans = max(ans, r-l+1);
    }
    cout << ans << endl;
    return 0;
}