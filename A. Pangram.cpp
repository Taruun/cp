#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    for(int i = 0; i < s.size(); i++) 
        s[i] = tolower(s[i]);

    set<char>ch(s.begin(), s.end()); // alternative`
    // set<char>ch;
    // for(char c: s) ch.insert(c);


    cout << ((ch.size() == 26) ? "YES" : "NO") << endl; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}