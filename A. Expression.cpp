#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int a, b, c; cin >> a >> b >> c;

    int ans = max({a + b + c,
    a * b * c,
    a + b * c,
    a * b + c,
    (a + b) * c,
    a * (b + c)})
    cout << ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}

//Challenge:

//

//Observation:

//

//Analysis:

//