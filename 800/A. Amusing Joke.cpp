#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    string s, a, b, c; cin >> a >> b >> c;
     s = a + b;

     sort(s.begin(), s.end());
     sort(c.begin(), c.end());

     cout << ((s == c) ? "YES" : "NO");
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}

