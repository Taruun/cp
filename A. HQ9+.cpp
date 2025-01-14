#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    string s; cin >> s;
    set<char>st = {'H', 'Q', '9'};
    for(char c: s){
       if(st.count(c)){
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}