#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n; cin >> n;
    while(n % 2 == 0) n /= 2; // parity divide n till it becomes odd

    cout << ((n != 1) ? "YES" : "NO") << endl;

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc; cin >> tc;
    while(tc--)    solve();
    return 0;
}