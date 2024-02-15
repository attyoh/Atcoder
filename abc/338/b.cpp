#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    string s;
    cin >> s;

    vector<int> cnt(26);

    for (char c : s) cnt[c - 'a']++;

    char ans = 'a';
    int mx_cnt = 0;

    rep(i, 26) {
        if (cnt[i] > mx_cnt) {
            mx_cnt = cnt[i];
            ans = 'a' + i;
        }
    }

    cout << ans << endl;
    return 0;
}