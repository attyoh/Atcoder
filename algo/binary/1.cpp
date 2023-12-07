#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    double n; cin >> n;

    auto f = [&](double x) {
        return x*(x*(x+1)+2)+3;
    };

    double left = 0, right = 100;
    while (right - left > 1e-3) {
        double mid = (left + right) / 2;
        if (f(mid) < n) left = mid;
        else right = mid;  
    }

    double ans = left;
    cout << ans << endl;
    return 0;
}