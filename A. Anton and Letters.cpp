#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    string s;
    getline(cin, s); 

    set<char>st;
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'a' && s[i] <= 'z') st.insert(s[i]);
    }

    cout << st.size() << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}