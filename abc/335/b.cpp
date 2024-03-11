#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i <= (n); ++i)

int main() {
    int n;
    cin >> n;
    rep(i,n) rep(j,n) rep(k,n) {
        if (i+j+k <= n) printf("%d %d %d\n", i, j, k);
    }
    return 0;
}