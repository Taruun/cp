#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int a,b; cin >> a >> b;
    if(a % b == 0) cout << 0 << endl;
    else{
        int remainder = a % b;
        cout << b - remainder << endl;
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc; cin >> tc;
    while(tc--)    solve();
    return 0;
}