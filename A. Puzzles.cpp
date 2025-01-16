// sliding window
// [5, 7, 10, 10, 12, 22]
// [5, 7, 10, 10] 
// [7, 10, 10, 12]
// [10, 10, 12, 22]

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n, m; cin >> n >> m;
    vector<int>arr(m);
    for(auto &it : arr) cin >> it;

    int min_diff = INT_MAX;
    sort(arr.begin(), arr.end());
    for(int i = 0; i <= m - n; i++){
        int curr_diff = arr[i + n - 1] - arr[i];
        min_diff = min(min_diff, curr_diff);
    }
    cout << min_diff;
    
    }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}