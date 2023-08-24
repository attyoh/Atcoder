#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n; string s;
    cin >> n >> s;

    ll ans = 0;
    for (int i=0, j=1; j < n; ++j) {
        if (s[i] != s[j]) {
            ans += (j-i) * (n-j);
            i = j;
        }
    }
    cout << ans << endl;
    return 0;
}