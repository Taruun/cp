// take input
// take arr input
// initialize first pre with arr[0]
// prefix[i] = prefix[i - 1] + arr[i]
// initialize query

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n, q; cin >> n >> q;
    vector<int>arr(n);
    for(auto &it: arr) cin >> it;

    vector<int>prefix(n);
    prefix[0] = arr[0];
    for(int i = 1; i < n; i++){
        prefix[i] = prefix[i - 1] + arr[i];
    }

    while(q--){
        int a, b; cin >> a >> b;
        a--;b--;

        cout << prefix[b] - ((a > 0) ? prefix[a - 1] : 0) << " ";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}