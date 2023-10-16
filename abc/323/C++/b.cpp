#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int n;
    cin >> n;

    vector<int> w(n);
    rep(i,n) {
        string s;
        cin >> s;
        rep(j,n) {
            if (s[j] == 'o') w[j]++;
        }
    }

    vector<int> ans(n);
    rep(i,n) ans[i] = i;
    sort(ans.begin(), ans.end(), [&](int a, int b){
        if (w[a] == w[b]) return a < b;
        else return w[a] > w[b];
    });

    rep(i,n) cout << ans[i]+1 << ' ';
    return 0;
}