#include <bits/stdc++.h>
using namespace std;

bool f(string s) {
    int d = abs(s[0] - s[1]);
    return d == 2 || d == 3;
}

int main() {
    string s, t;
    cin >> s >> t;
    cout << (f(s) == f(t) ? "Yes" : "No") << endl;
    return 0;
}