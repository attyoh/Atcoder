#include <bits/stdc++.h>
using namespace std;
#define nrep(i,s,n) for(int i = (s); i <= (n); ++i)
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<ll> a(n+1);
    nrep(i,1,n) cin >> a[i];
    nrep(i,1,n) a[i] += a[i-1];

    ll vmin = *min_element(a.begin(), a.end());
    cout << a[n] - vmin << endl;
    return 0;
}