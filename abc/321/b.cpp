#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define nrep(i,s,n) for(int i = (s); i < (n); ++i)

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    rep(i,n-1) cin >> a[i];

    while(a.back() <= 100) {
        auto b = a;
        sort(b.begin(), b.end());

        int all = 0;
        nrep(i,1,n-1) all += b[i];
        if (all >= k) {
            cout << a.back() << endl;
            return 0;
        }
        a.back()++;
    }
    cout << -1 << endl;
    return 0;
}
