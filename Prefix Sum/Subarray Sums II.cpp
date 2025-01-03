// take input

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n, x; cin >> x;
    vector<int>arr(n);
    for(auto &it: arr) cin >> it;

    vector<int>prefix(n);
    prefix[0] = arr[0];
    for(int i = 1; i < n; i++){
        prefix[i] = prefix[i - 1] + arr[i];
    }

    int count = 0
    for(int i = 0; i < prefix; i++){
        if(prefix == x) count++;
    }

    cout << count << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}