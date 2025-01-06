#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n; cin >> n;
    int k;
    vector<int>arr(n + 1);
    for(int i = 1; i <= n; i++){
        cin >> k; // taking input 
        arr[k] = i; // storing that input with current index
    }

    for(int i = 1; i <=n; i++) cout << arr[i] << " ";
    
  
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}