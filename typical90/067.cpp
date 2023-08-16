#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main() {
  string n; int k;
  cin >> n >> k;

  auto ten = [&](string s) {
    ll x = 0;
    for (char c : s) x = x*2+(c-'0');
    return x;
  };

  auto number = [&](ll n) -> string {
    if (n==0) return "0";
    string res;
    while (n > 0) {
      res = char(n % 9 + '0') + res;
      n /= 9;
    }
    return res;
  };

  rep(i,k) {
    n = number(ten(n));
    rep(j,n.size()) {
      if (n[j] == '8') n[j] = '5';
    } 
  }
  cout << n << endl;
  return 0;
}