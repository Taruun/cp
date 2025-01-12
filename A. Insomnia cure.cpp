#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int k, l, m, n, d; cin >> k >> l >> m >> n >> d;
    int count = 0;
    for(int i = 1; i <= d; i++){
        if(i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) count++; // d is till she counted so no need to check for
    }

    cout << count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}