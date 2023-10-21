#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    int n;
    cin >> n;

    vector<vector<int>> G(n);
    rep(i,n-1) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    vector<int> color(n), one, two;
    auto dfs = [&](auto dfs, int pos, int cor) -> void {
        color[pos] = cor;
        if (cor%2) one.push_back(pos);
        else two.push_back(pos);
        for (int next_pos : G[pos]){
            if (color[next_pos]) continue;
            dfs(dfs, next_pos, 3-cor);
        }
    };
    dfs(dfs, 0, 1);
    
    if (one.size() > two.size()) {
        rep(i,n/2) cout << one[i]+1 << ' ';
    } else {
        rep(i,n/2) cout << two[i]+1 << ' ';
    }
    return 0;
}