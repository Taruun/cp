#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {

    int n, k; cin >> n >> k;
    int available_time = 240 - k;
    int total = 0;
    int solved = 0;

    for(int i = 1; i <= n; i++){
        total += 5 * i;
        if(total > available_time) break;
        solved++;

    }


    cout << solved << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}