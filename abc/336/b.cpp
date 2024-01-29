#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0;
    while((n&1) == 0) {
        ans++;
        n >>= 1;
    }
    cout << ans << endl;
    return 0;
}