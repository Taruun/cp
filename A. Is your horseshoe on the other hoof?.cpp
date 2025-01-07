#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n = 4;
    vector<int>arr(n);
    for(auto &it: arr) cin >> it;

    sort(arr.begin(), arr.end()); // sorting because duplicates can be randomly arrange 
    int count = 1; 
    for(int i = 1; i < n; i++){
        if(arr[i - 1] != arr[i]) count++;
    }

    cout << n - count << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}