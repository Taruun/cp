// k : cost of banana
// n : money soldier has
// w : number of banana soldier wants

// sum of natural numbers sum = n (n + 1) / 2
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int k, n, w; cin >> k >> n >> w;
    
    int sum = ((k * w * (w + 1)) / 2);
    cout << ( (sum <= n) ? 0 : (sum - n)) << endl;

}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}