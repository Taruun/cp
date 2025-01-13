#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n; cin >> n;
    map<string, int>val;
    val["Tetrahedron"]      = 4; 
    val["Cube"]             = 6; 
    val["Octahedron"]       = 8; 
    val["Dodecahedron"]     = 12; 
    val["Icosahedron"]      = 20; 

    int ans = 0;
    for(int i = 0; i < n; i++){
        string s; cin >> s;
        ans+=val[s];
    }
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}