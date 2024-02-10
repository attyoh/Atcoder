#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    
    map<int,int> mp;
    rep(i,n) mp[a[i]] = i+1;

    vector<int> ans = {mp[-1]};
    rep(i,n) {
        ans.push_back(mp[ans.back()]);
    }

    rep(i,n) cout << ans[i] << (i!=n-1 ? ' ' : '\n');;
    return 0;
}