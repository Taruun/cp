#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n,m; cin >> n >> m;
    if(min(n,m) % 2 == 0) cout << "Malvika" << endl;
    else cout << "Akshat" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}