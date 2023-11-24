#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];

    sort(a.begin(), a.end(), greater<int>());
    unique(a.begin(), a.end());
    cout << a[1] << endl;
    return 0;
}