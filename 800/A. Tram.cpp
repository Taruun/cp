#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n; cin >> n;
    int curr_pass = 0;
    int max_cap = 0;

    for(int i = 0; i < n; i++){
        int ai, bi;
        cin >> ai >> bi;
        curr_pass -= ai;
        curr_pass += bi;

        max_cap = max(max_cap, curr_pass);
    }

    cout << max_cap << endl;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}