// The moment a character different from the previous one is encountered, the sequence is broken
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    string s; cin >> s;
    int count = 1;
    for(int i = 1; i < s.size(); i++){
        if(s[i] == s[i - 1]) count++;
        if(count >= 7){
            cout << "YES" << endl;
            return;
        }
        else count = 1; 
    }

    cout << "NO" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}