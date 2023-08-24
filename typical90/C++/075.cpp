#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

vector<ll> prime_factors(ll n) {
    vector<ll> factors;
    for (ll i = 2; i*i <= n; ++i) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n != 1LL) factors.push_back(n);
    return factors;
}

int main() {
    ll n;
    cin >> n;
    const auto m = prime_factors(n).size();
    for (int i = 0;; ++i) {
        if (m <= (1<<i)) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}
