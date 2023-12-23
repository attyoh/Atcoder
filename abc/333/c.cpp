#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;

    vector<ll> r;
    for(ll i=1; i<1e12; i = i*10+1) {
        r.push_back(i);
    }

    vector<ll> v;
    for (ll a : r) {
        for (ll b : r) {
            for (ll c : r) {
                v.push_back(a+b+c);
            }
        }
    }
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    cout << v[n-1] << endl;
    return 0;
}