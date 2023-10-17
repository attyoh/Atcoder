#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    vector<string> s(n);
    rep(i,m) cin >> a[i];
    rep(i,n) cin >> s[i];

    vector<int> score(n);
    rep(i,n) {
        score[i] += i+1;
        rep(j,m) {
            if (s[i][j] == 'o') score[i] += a[j];
        }
    }
    int mx = *max_element(score.begin(), score.end());

    rep(i,n) {
        vector<int> no;
        rep(j,m) {
            if (s[i][j] == 'x') no.push_back(a[j]);
        }
        sort(no.begin(), no.end());
        int ans = 0;
        while (score[i] < mx) {
            score[i] += no.back();
            no.pop_back();
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}