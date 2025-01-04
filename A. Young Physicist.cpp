#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n; cin >> n;
    int x = 0, y = 0, z = 0;

    int xi, yi, zi;
    for(int i = 0; i < n; i++){
        cin >> xi >> yi >> zi;
        x += xi;
        y += yi;
        z += zi;

    }

    cout << ((x == 0 && y == 0 && z == 0) ? "YES": "NO");

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}