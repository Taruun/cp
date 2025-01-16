// 12345 
// n / 100 = 123 removes last 2 digits   
// * 10 = 1230    
// + n % 10 = 1235 adds last number 

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n; cin >> n;
    if(n >= 0) cout << n << endl;
    else {
        int a = n / 10
        int b = n / 100 * 10 + n % 10; // removes second last digit
        cout << max(a,b)<< endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}