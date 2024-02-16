#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    string s;
    cin >> s;

    vector<int> cnt(26);
    for (char c : s) cnt[c - 'a']++;

    pair<int,char> ans(0,'a');
    rep(i,26) {
        ans = min(ans, make_pair(-cnt[i], char('a'+i)));
    }
    cout << ans.second << endl;
    return 0;
}