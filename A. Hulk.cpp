#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n; cin >> n;
    string ans = "";

    for(int i = 1; i <= n; i++){
        if(i % 2 == 0) ans+="I love";
        else ans+= "I hate";

        if(i != n) ans+= " that ";
    }

    cout << ans << " it" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}