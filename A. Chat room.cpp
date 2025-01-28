#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    string s; cin >> s;

    string hello = "hello";
    index = 0;

    for(char c: s){
        if(c == hello[index]) index++;

        if(index == 5){
            cout << "YES";
            return;
        }
    }

    cout << "NO";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}
