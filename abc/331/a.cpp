#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);++i)
using namespace std;

int main() {
    int M, D, y, m, d;
    cin >> M >> D >> y >> m >> d;

    if (d+1 > D) {
        d = 1;
        if (m+1 > M) {
            m = 1;
            y++;
        } else m++;
    } else d++;

    printf("%d %d %d\n", y, m, d);
    return 0;
}
