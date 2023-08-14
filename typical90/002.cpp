#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define r_rep(i,a,n) for (int i = a; i >= (n); --i)

int main() {
  int n; cin >> n;

  auto check = [&](string s) {
    int cnt = 0;
    rep(i,n) {
      if (s[i] == '(') cnt++;
      if (s[i] == ')') cnt--;
      if (cnt < 0) return;
    }
    if (cnt == 0) cout << s << endl;
    return;
  };

  rep(i,1<<n) {
    string can = "";
    r_rep(j,n-1,0) {
      if (i & (1 << j)) can += ")";
      else can += "("; 
    }
    check(can);
  }
  return 0;
}
