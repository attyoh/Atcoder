#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    ll n; cin >> n;
    vector<ll> a(n), b = {0};
    rep(i,n) cin >> a[i];

    rep(i,n*2) b.push_back(b.back()+a[i%n]);

    const ll whole = b[n];

    auto solve = [&]() -> bool {
        if (whole % 10 != 0) return false;
        rep(i,n) {
            const ll target = b[i] + whole/10;
            if (binary_search(b.begin(), b.end(), target)) return true;
        }
        return false;
    };
    cout << (solve() ? "Yes" : "No") << endl;
    return 0;
}