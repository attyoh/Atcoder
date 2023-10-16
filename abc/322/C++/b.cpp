#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    string s, t;
    cin >> n >> m >> s >> t;
    int ans = 0;
    if (!t.starts_with(s)) ans += 2;
    if (!t.ends_with(s)) ans++;
    cout << ans << endl;
    return 0;
}