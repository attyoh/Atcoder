#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    rep(i,n) cin >> a[i];
    rep(i,m) cin >> b[i];
    
    rep(i,m) {
        int left = -1, right = n;
        while(right - left > 1) {
            int mid = (left + right) / 2;
            if (a[mid] >= b[i]) right = mid;
            else left = mid;
        }
        cout << right << endl;
    }
    return 0;
}