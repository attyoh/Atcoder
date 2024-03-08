#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    int n, t;
    cin >> n >> t;
    vector<ll> s(n);

    unordered_map<ll,ll> mp;
    mp[0] = n;
    auto add = [&](ll x, ll num) {
        mp[x] += num;
        if (mp[x] == 0) mp.erase(x);
    };

    rep(i,t) {
        int a, b;
        cin >> a >> b;
        a--;
        add(s[a], -1);
        s[a] += b;
        add(s[a],1);
        cout << mp.size() << endl;
    }
    return 0;
}