#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> a(n+1);
  rep(i,n) cin >> a[i+1];

  int sv = 1;
  rep(i,n) sv = a[sv];

  vector<int> ans;
  int v = sv;
  do {
    ans.push_back(v);
    v = a[v];
  } while(sv != v);

  int m = ans.size();
  cout << m << endl;
  rep(i,m) cout << ans[i] << (i!=m-1 ? ' ' : '\n');
  return 0;
}