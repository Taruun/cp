#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n; cin >> n;
    vector<int>arr(n);
    int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        sum+=arr[i];
    }

    sort(arr.rbegin(), arr.rend()); // tpo get the max coins
    int count = 0;
    int ans = 0; 
    for(int i = 0; i < n; i++){
        ans+=arr[i];
        count++;
        if(ans > sum / 2) break; // to make sure we have > than the twin coins 
    }

    cout << count << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}