// Simple observation:
// The position is going to -odd to Sakurako 
// And +even is going to Kosuke

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n; cin >> n;
    if(n % 2)
        cout << "Kosuke" << endl;
    else 
        cout << "Sakurako" << endl;
 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc; cin >> tc;
    while(tc--)
        solve();
    return 0;
}