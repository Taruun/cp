#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n; cin >> n;
    vector<int>arr(n);
    for(auto &it : arr) cin >> it;

    int recruit = 0;
    int crime = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == -1){
            if(recruit > 0) recruit--;
            else crime++;
        }
        else recruit += arr[i];
    }
    cout << crime << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}