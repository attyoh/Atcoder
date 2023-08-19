#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
  int n, l, k;
  cin >> n >> l >> k;
  vector<int> a(n);
  rep(i,n) cin >> a[i];

  auto solve = [&](int m) {
    int cnt = 0, pre = 0;
    rep(i,n) {
      if (a[i] - pre >= m && l - a[i] >= m) {
        cnt++;
        pre = a[i];
      }
    }
    if (cnt >= k) return true;
    return false;
  };

  int left = -1, right = l;
  while(right - left > 1) {
    int mid = (left + right) / 2;
    if (solve(mid)) left = mid;
    else right = mid;
  }
  cout << left << endl;
  return 0;
}