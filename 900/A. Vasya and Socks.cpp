#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int socks, mom_buys_socks; cin >> socks >> mom_buys_socks;
    int days = 0;
    while(socks > 0){
        days++;
        socks--;

        if(days % mom_buys_socks == 0) socks++;
    }

    cout << days ;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}


// finding some stupid shortcuts
// just need to find when to add or remove sock
// can be use using implemntarion too