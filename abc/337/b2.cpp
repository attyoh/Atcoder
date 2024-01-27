#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    string s;
    cin >> s;

    regex re("A*B*C*");
    cout << (regex_match(s,re) ? "Yes" : "No") << endl;
    return 0;
}