#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

bool solve() {
  int n, m;
  cin >> n >> m;
  vector<string> s(n);
  rep(i,n) cin >> s[i];
  
  sort(s.begin(), s.end());
  do{
    bool ok = true;
    rep(i,n-1) {
      int t = 0;
      rep(j,m) if (s[i][j] != s[i+1][j]) t++;
      if (t != 1) ok = false;
    }
    if (ok) return ok;
  } while(next_permutation(s.begin(), s.end()));
  return false;
}

int main() {
  cout << (solve() ? "Yes" : "No") << endl;
  return 0;
}