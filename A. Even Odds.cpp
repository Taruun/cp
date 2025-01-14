 // this will give odd nums 2 * n - 1 
 // 1 odd num  = 2 x 1 - 1 = 1
 // 2 odd num  = 2 x 2 - 1 = 3
 // 3 odd num  = 2 x 3 - 1 = 5
 // 4 odd num  = 2 x 4 - 1 = 7

 // (k - odd_count) * 2 
 // remoce the

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n >> k; cin >> n >> k;

    int odd_count = (n + 1) / 2;
    if(k <= odd_count) cout << 2k - 1 << endl;
    else cout << (k - odd_count) * 2 << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}