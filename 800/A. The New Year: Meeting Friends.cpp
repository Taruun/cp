#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int arr[3];
    for(auto &it: arr) cin >> it;

    sort(arr, arr + 3);
    cout << (arr[2] - arr[1]) + (arr[1] - arr[0]) << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}