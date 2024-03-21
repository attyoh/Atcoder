#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    vector<int> ans;
    int a;
    while(cin >> a) ans.push_back(a);

    int n = ans.size();
    for (int i = n-1; i >= 0; i--) {
        cout << ans[i] << endl;
    }
    return 0;
}