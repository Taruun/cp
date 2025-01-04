#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    string s, t; cin >> s >> t;
    if(s.size() != t.size()) {
        cout << "NO" << endl;
        return;
    }
    for(int i = 0; i < s.size(); i++){
       if(s[i] != t[s.size() - i - 1]){ // To keep moving last to second last to third last used - i
        cout << "NO" << endl;
        return;
        } 
    }
    cout << "YES" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}