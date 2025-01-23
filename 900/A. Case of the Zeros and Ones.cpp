#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    int count_0 = 0;
    int count_1 = 0;

    for(char c: s){
        if(c == '0') count_0++;
        else count_1++;
    } 

    cout << n - 2 * min(count_1, count_0);

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}

//Challenge:

//

//Observation:

//

//Analysis:

//