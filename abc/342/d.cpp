#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    int n;
    cin >> n;

    auto c2 = [&](ll x) {
        return x*(x-1) / 2;
    };

    int zero = 0;
    map<int,int> mp;
    rep(i,n) {
        int a;
        cin >> a;

        if (a == 0) zero++; else {
            int na = 1;
            for (int p = 2; p*p <= a; p++) {
                int cnt = 0;
                while (a%p == 0) {
                    a /= p;
                    cnt++;
                }
                cnt %= 2;
                if (cnt == 1) na *= p;
            }
            if (a != 1) na *= a;
            mp[na]++;
        }
    }

    ll ans = c2(n) - c2(n-zero);
    for (auto [x,y] : mp) ans += c2(y);
    cout << ans << endl;
    return 0;
}