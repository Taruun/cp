#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n, m; cin >> n >> m; 
    vector<int>arr(n);
    for(auto &it: arr) cin >> it;

    int bellars  = 0;
    sort(arr.begin(), arr.end());
    for(int i = 0; i < m; i++){
        if(arr[i] < 0) bellars+=abs(arr[i]); 
    }

    cout << bellars << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}