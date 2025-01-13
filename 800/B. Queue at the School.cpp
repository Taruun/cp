#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n, t; cin >> n >> t;
    string s; cin >> s;
    while(t--){
        for(int i = 1; i < n; i++){
            if(s[i - 1] == 'B' && s[i] == 'G'){
                s[i - 1] = 'G';
                s[i] = 'B';
                i++; // to jot compare i and i + 1 again instead next to next so it will compare i - 1 and  i
            }
        }
    }

    cout << s << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}