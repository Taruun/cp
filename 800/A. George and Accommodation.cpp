#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n; cin >> n;
    int count = 0;
    for(int i = 0; i < n; i++){
        int p1, q1; cin >> p1 >> q1;
        if(q1 - p1 >= 2) count++;
    }

    cout << count << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}