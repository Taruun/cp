
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n, k; cin >> n >> k;
    int arr[100];
    for(auto &it: arr) cin >> it;

    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] > 0 && arr[i] >= arr[k- 1]) count++;
    }

    cout << count << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}