#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
    int n, k;
    cin >> n >> k;
    vector<double> L(n);
    rep(i,n) cin >> L[i];

    auto f = [&](double x) {
        double ans = 0;
        for (double l : L) ans += (int)(l/x);
        return ans;
    };

    auto bs = [&]() {
        double left = -1, right = 1e6;
        while(abs(right - left) > 1e-8) {
            double mid = (left + right) / 2;
            if (f(mid) < k) right= mid;
            else left = mid;
        }
        return right;
    };

    cout << bs() << endl;
    return 0;
}