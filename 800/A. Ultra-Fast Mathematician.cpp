#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    string s1, s2; cin >> s1 >> s2;
    for(int i = 0; i < s1.size(); i++){
        if(s1[i] == s2[i]) s1[i] = '0';
        else s1[i] = '1';
    }

    cout << s1 << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}