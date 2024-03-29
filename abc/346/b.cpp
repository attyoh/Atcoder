#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    string s = "wbwbwwbwbwbw";
    int n = s.size();
    int w, b;
    cin >> w >> b;
    
    auto solve = [&]() {
        rep(i,n) {
            int nw = 0, nb = 0;
            rep(j,w+b) {
                if(s[(i+j)%n]=='w') nw++;
                else nb++;
            }
            if (nw == w && nb == b) return true;
        }
        return false;
    };

    cout << (solve() ? "Yes" : "No") << endl;
    return 0;
}
