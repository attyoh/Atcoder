#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll a, b;
    cin >> a >> b;

    ll pow18 = 1000000000000000000LL;
    auto solve = [&](ll a, ll b) -> string {
        ll ret = b / gcd(a,b);
        if (ret > pow18/a) return "Large";
        return to_string(ret);
    };

    cout << solve(a,b) << endl;
    return 0;
}