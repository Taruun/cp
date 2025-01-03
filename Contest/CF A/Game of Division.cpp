#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n, k; cin >> n >> k;
    
    vector<int>arr(n);
    for(auto &it: arr) cin >> it;

    for(int i = 0; i < n; i++){
        bool flag = true;
        for(int j = 0; j < n; j++){
            if(i == j) continue;
            if(abs(arr[i] - arr[j]) % k == 0) {
                flag = false;
                break;
            }
        }
        if(flag){
            cout << "YES" << '\n';
            cout << i + 1 << '\n';
            return;

        }

    }

    cout << "NO" << '\n';

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    while(n--) solve();
    return 0;
}