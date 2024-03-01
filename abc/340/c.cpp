#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n;
    cin >> n;

    unordered_map<ll,ll> memo;
    auto f = [&](auto f, ll x) -> ll {
        if (x == 1) return 0;
        if (memo.count(x)) return memo[x];
        ll res = f(f,x/2) + f(f,x-x/2) + x;
        return memo[x] = res;
    };

    cout << f(f,n) << endl;
    return 0;
}