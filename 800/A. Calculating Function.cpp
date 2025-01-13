// when n is odd we need to add unpaired element in last  (n- 1) / 2 - -(n+1)/2
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    ll n; cin >> n;
    cout << ((n % 2 == 0) ? n/2 : -(n + 1)/2) << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}