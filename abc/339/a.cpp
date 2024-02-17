#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    string s;
    cin >> s;

    int pi = -1;
    rep(i,s.size()) {
        if (s[i] == '.') pi = i;
    }
    cout << s.substr(pi+1) << endl;
    return 0;
}