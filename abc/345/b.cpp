#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll x;
    cin >> x;
    cout << ((x + (x < 0 ? 0 : 9)) / 10) << endl;
    return 0;
}
