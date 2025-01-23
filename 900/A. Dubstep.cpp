#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    string s; cin >> s;
    bool is_true = true;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B'){ // if wub skip 3 step and add space between words
            i+=2;
            if(!is_true) cout << " ";
            continue;
        }else{
            is_true = false; // set to false and print word
            cout << s[i];
        }
    }
// for the first and last we checking that with that by initialising it firstly with true 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}