#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n; cin >> n;
  vector<string> s(n);
  rep(i,n) cin >> s[i];

  set<string> st;
  rep(i,n) {
    if (st.count(s[i])) continue;
    cout << i+1 << endl;
  }
  return 0;
}