#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    ll n;
    cin >> n;

    for (int i=1e6; i>=1; i--) {
        ll k = i*i*i;
        if (k > n) continue;
        string s = to_string(k);
        string t = s;
        reverse(t.begin(), t.end());
        if (s != t) continue;
        cout << s << endl;
        return 0;
    }
    return 0;
}