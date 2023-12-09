#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int n;
    cin >> n;
    vector<int> w(n);
    rep(i,n) cin >> w[i];

    vector<int> a = w;
    sort(a.begin(), a.end());
    auto f = [&](int k) {
        int left = -1, right = n;
        while(abs(right - left) > 1) {
            int mid = (left + right) / 2;
            if (a[mid] >= k) right = mid;
            else left = mid;
        }
        return right;
    };

    rep(i,n) cout << f(w[i]) << endl;
    return 0;
}