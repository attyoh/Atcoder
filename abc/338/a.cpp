#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    string s;
    cin >> s;

    rep(i,s.size()) {
        if (i == 0) {
            if (islower(s[i])) {
                cout << "No" << endl;
                return 0;
            }
        } else {
            if (isupper(s[i])) {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}