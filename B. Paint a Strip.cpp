#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n; cin >> n;

    int ans = 1; 
    int curr = 1;

    while(true){
        if(curr >= n){
            cout << ans;
            return;
        }

        ans++;
        curr = 2 * x + 2;
    } 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}

//Challenge:

// Understanding question sepecially this ar≥⌈r−l+12⌉

//Observation:

// Just needed some dry run and pattern understanding

//Analysis:

// This is exponential growth prob