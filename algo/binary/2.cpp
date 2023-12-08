#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    double n, m;
    cin >> n >> m;

    auto f = [&](double x) {
        double ans = n + 1;
        rep(i,5) ans = ans * x + 1;
        return ans;
    };

    double left = 0, right = 100;
    while(right - left > 1e-4) {
        double mid = (left + right) / 2;
        if (f(mid) < m) left = mid;
        else right = mid;
    }
    cout << left << endl;
    return 0;
}