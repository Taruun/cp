#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
void solve() {
    string s; cin >> s;
    bool change = true;
    for(int i = 1; i < s.size(); i++){
        if(islower(s[i])) change = false; // Print - know that rint is small so cout as it is
    }
 
    if(change){ // But if it's like cAPS
        for(int j = 0; j < s.size(); j++){
            if(islower(s[j])) s[j] = toupper(s[j]); // change to uppercase if it's small cAPS - CAPS  
            else s[j] = tolower(s[j]); // change to smallercase if it's capital CAPS - Caps
        }
    }  
 
    cout << s;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
    return 0;
}
