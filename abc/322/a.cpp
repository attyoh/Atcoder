#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int n; string s;
    cin >> n >> s;
    auto i = s.find("ABC");
    if (i == string::npos) cout << -1 << endl;
    else cout << i+1 << endl;
    return 0;
}