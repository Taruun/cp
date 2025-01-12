#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n; cin >> n;
    vector<int>arr(n);
    for(auto &it: arr) cin >> it;

    int max_height = 0, min_height = INT_MAX;
    for(int i = 0; i < n; i++){
        if(arr[i] > arr[max_height]) max_height = i;
        if(arr[i] <= arr[min_height]) min_height = i; // '<=' for duplicates
    }

    int swaps = max_height + (n - 1  - min_height);
    if(min_height < max_height) swaps--; // right side and left side will overlap if maximum is at end and minmum is at start so not considering that 1 swap

    cout << swaps << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}