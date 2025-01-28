#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    string s; cin >> s;
    int n = s.size();
    bool found = false;

    for(int i = 1; i < n; i++){
        if(s[i] == s[i - 1]){
            cout << s[i - 1] << s[i] << endl;
            found = true;
            break;
        }
    }

    if(!found){
        for(int i = 2; i < n; i++){
            if(s[i]!= s[i - 1] && s[i]!= s[i - 2] && s[i - 1] != s[i - 2]){
                cout << s[i - 2] << s[i - 1] << s[i] << endl;
                found = true;
                break;
            }
        }
    }


    if(!found) cout << -1 << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc; cin >> tc;
    while(tc--)
    solve();
    return 0;
}

//Challenge:

// THE Question again

//Observation:

// 

//Analysis:

//