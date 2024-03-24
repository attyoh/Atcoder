#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

const int INF = 1001001001;
void chmin(int &x, int y) {x = min(x,y);}

int main() {
    string t;
    int n;
    cin >> t >> n;

    int m = t.size();
    vector<vector<int>> dp(n+1, vector<int>(m+1,INF));
    dp[0][0] = 0;

    rep(i,n) {
        int a;
        cin >> a;
        rep(j,m+1) dp[i+1][j] = dp[i][j];
        rep(ai,a) {
            string s;
            cin >> s;
            int ss = s.size();
            rep(ti,m+1) {
                if (ti+ss > m) break;
                bool ok = true;
                rep(si,ss) {
                    if (t[ti+si] != s[si]) ok = false;
                } 
                if (ok) chmin(dp[i+1][ti+ss], dp[i][ti]+1);
            }
        }
    }
    cout << (dp[n][m]==INF ? -1 : dp[n][m]) << endl;
    return 0;
}