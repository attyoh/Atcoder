#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    rep(i,n) cin >> a[i];

    int ans = 0, r = 0, cnt = 0;
    map<int,int> mp;
    rep(l,n) {
        while(r < n) {
            if (mp[a[r]] == 0 && cnt == k) break;
            if (mp[a[r]] == 0) cnt++;
            mp[a[r]]++;
            r++;
        }
        ans = max(ans, r-l);
        if (mp[a[l]] == 1) cnt--;
        mp[a[l]]--;
    }
    cout << ans << endl;
    return 0;
}