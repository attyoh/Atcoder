#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    int a, b;
    cin >> a >> b;
    
    auto pow = [&](ll a, ll b) {
        ll x = 1;
        rep(i,a) x *= b;
        return x;
    };
    
    cout << pow(a,b) + pow(b,a) << endl;
    return 0;
}