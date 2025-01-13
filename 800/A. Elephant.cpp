
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int x; cin >> x;
    int res = x / 5; // 12 % 5 remainder is 2
    if(x % 5 > 0) res++; // Check if remainder is > 0 if yes add + 1; 2 + 1
    cout << res << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}