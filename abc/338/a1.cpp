#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    regex re("^[A-Z][a-z]*");
    cout << (regex_match(s,re) ? "Yes" : "No") << endl;
    return 0;
}