#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n; cin >> n;
    vector<string>arr(n);
    for(auto &it : arr) cin >> it;

    int count = 1;
    for(int i = 1; i < n; i++){
        if(arr[i - 1] != arr[i]){
            count++;
        } 
    }

    cout << count << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}