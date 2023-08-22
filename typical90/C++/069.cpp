#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

const ll mod = 1000000007;

long long modPow (int a, long long b) {
    int ans = 1;
    while (b != 0) {
        if (b % 2 == 1) {
            ans = (long long)(ans)*a % mod;
        }
        a = (long long)(a)*a % mod;
        b /= 2;
    }
    return ans;
}

int main() {
    ll n, k;
    cin >> n >> k;
    if (k == 1) {
        cout << (n == 1 ? 1 : 0) << endl;
    }
    else if (n == 1) {
        cout << k % mod << endl;
    }
    else if (n == 2) {
        cout << k * (k-1) % mod << endl;
    }
    else {
        cout << k * (k-1) % mod * modPow(k-2, n-2) % mod << endl;
    }
    return 0;
}
