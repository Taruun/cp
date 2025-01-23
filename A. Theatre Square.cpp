#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n, m, a; cin >> n >> m >> a;

    int ans = ceil((double)n/ a) * ceil((double)m / a);
    cout << ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}

//Challenge:

// Hard to understand the quesition

//Observation:

// Output can help to summarize the stroy

//Analysis:

// Ceil works on only decimals but simple / does not give decimal 
// so get into decimal using double and then can get ceil value