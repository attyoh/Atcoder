#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    regex re("<=+>");
    cout << (regex_match(s,re) ? "Yes" : "No") << endl;
    return 0;
}