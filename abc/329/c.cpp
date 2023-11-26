#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using P = pair<char, int>;

int main() {
    int n;
    string s;
    cin >> n >> s;

    vector<P> p;
    p.emplace_back(s[0], 0);
    for(char c : s) {
        if (p.back().first == c) p.back().second++;
        else p.emplace_back(c, 1);
    }

    vector<int> mx(26);
    for (auto [c,len] : p) {
        mx[c-'a'] = max(mx[c-'a'], len);
    }

    int ans = 0;
    rep(i,26) ans += mx[i];
    cout << ans << endl;
    return 0;
}