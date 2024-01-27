#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    string s;
    cin >> s;

    string t = s;
    sort(t.begin(), t.end());
    cout << (s == t ? "Yes" : "No") << endl;
    return 0;
}