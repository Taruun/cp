#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    string s = "qwertyuiop[]asdfghjkl;'zxcvbnm,./";
    string dir, msg; cin >> dir >> msg;
    string ans;

    for(char c: msg){
        int pos = s.find(c);

        if(dir == "L") 
            ans+=s[pos + 1];
        else 
            ans+=s[pos - 1];
    }

    cout << ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}


// What was the challenge
// How to get the keyboard letters 

// Observation
// Loop the given message in the string and get the postion then smooth game

// Analysis
// Just find the position store it into var and then get it the char from s[pos + 1] pr s[pos -1 ]