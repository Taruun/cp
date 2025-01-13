// 0 based indexing arr[i] = 2i- 1
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n; cin >> n;
    for(int i = 0; i < n; i++)
        cout << 2 * i + 1 << " "; // one based indexing
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc; cin >> tc;
    while(tc--)
        solve();

    return 0;
}
