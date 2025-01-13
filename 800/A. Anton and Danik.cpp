#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int a_count = 0;
    int b_count = 0;

    for(int i = 0; i < n; i++){
        if(s[i] == 'A') a_count++;
        else b_count++;
    }

    if(a_count > b_count) cout << "Anton" << endl;
    else if (b_count > a_count) cout << "Danik" << endl;
    else cout << "Friendship" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}