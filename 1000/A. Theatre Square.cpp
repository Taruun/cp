#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
void solve() {
    int n, m, a; cin >> n >> m >> a;
 
    ll ans = ceil((double)n/ a) * ceil((double)m / a);
    cout << ans;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
    return 0;
}
