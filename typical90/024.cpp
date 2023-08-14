#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
using ll = long long;

bool solve() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n), b(n);
  rep(i,n) cin >> a[i];
  rep(i,n) cin >> b[i];

  ll diff = 0;
  rep(i,n) diff += abs(a[i]-b[i]);

  if (diff > k) return false;
  if (diff%2 != k%2) return false;
  return true;
}

int main() {
  cout << (solve() ? "Yes" : "No");
  return 0;
}