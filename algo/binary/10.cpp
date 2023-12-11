#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    ll n, x;
    cin >> n >> x;

    auto f = [&](ll m) {
        ll cnt = 0;
        rep(i,n) cnt += min(n, m/(i+1));
        return cnt;
    };

    auto bs = [&]() {
        ll left = -1, right = n*n;
        while(abs(right - left) > 1) {
            ll mid = (left + right) / 2;
            if (f(mid) >= x) right = mid;
            else left = mid;
        }
        return right;
    };

    cout << bs() << endl;
    return 0;
}