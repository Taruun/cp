#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
void solve() {
    int n; cin >> n;
    vector<int>arr(n);
    for(auto &it : arr) cin >> it;
 
    int curr_length = 1;
    int max_length = 1;
    for(int i = 1; i < n; i++){
        if(arr[i] >= arr[i - 1]) curr_length++;
        else curr_length = 1;
 
        if(curr_length > max_length)
            max_length = curr_length;
    }
 
 
    cout << max_length << endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
    return 0;
}
