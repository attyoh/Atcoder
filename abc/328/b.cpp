#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
    int n;
    cin >> n;

    int ans = 0;
    rep(i, n) {
        int d;
        cin >> d;
        rep(j, d) {
            set<char> st;
            for (auto c : to_string(i+1)) st.insert(c);
            for (auto c : to_string(j+1)) st.insert(c);
            if (st.size() == 1) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
