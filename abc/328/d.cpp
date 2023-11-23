#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    string s;
    cin >> s;

    int n = s.length();
    string ans;

    rep(i, n) {
        ans += s[i];

        if (ans.length() >= 3 && ans.substr(ans.length() - 3) == "ABC") {
            ans.resize(ans.length() - 3);
        }
    }

    cout << ans << endl;
    return 0;
}
