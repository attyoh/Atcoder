#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

ll c2(ll x) {return x*(x-1)/2;}

int main() {
    string s;
    cin >> s;
    ll n = s.size();

    map<char, ll> mp;
    for (char c : s) mp[c]++;
    ll same = 0;
    for (auto& p : mp) {
        ll f = p.second;
        same += c2(f);
    }

    ll ans = c2(n) - same;
    cout << (same ? ans+1 : ans) << endl;
    return 0;
}
