#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    string s; cin >> s;
    int count_0 = 0, count_1 = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '0') count_0++;
        else count_1++;
    }

    int total_length = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '0' && count_1 > 0) {
            count_1--;
            total_length++;
        } else if(s[i] == '1' && count_0 > 0) {
            count_0--;
            total_length++;
        } else 
            break;
    }
    cout << s.size() - total_length << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc; cin >> tc;
    while(tc--) solve();
    return 0;
}

//Challenge:

//

//Observation:

// count all the zeros and ones
// and for each 1 and 0 swap them basically decrement 1 or 0 if curr idx is opposite
// keep incrementing total_length which will later give remaining number so we can sub from n

//Analysis:

//