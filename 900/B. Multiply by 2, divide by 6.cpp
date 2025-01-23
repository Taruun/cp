#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n; cin >> n;
    int moves = 0;
    while(n != 1){
        if(n % 6 == 0){
            n /= 6;
            moves++;
        }
        else if(n % 3 == 0){
            n *= 2;
            moves++;
        }
        else{
            cout << -1 << endl;
            return;
        }
    }

    cout << moves << endl;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc; cin >> tc;
    while(tc--)    solve();
    return 0;
}