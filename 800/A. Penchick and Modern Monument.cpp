// To get the ops we need to find most occuring freq 
// And the to get the ans n - freq

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n; cin >> n;
    vector<int>arr(n);
    for(auto &i: arr) cin >> i;

    map<int, int>mp;
    for(auto &i: arr) mp[i]++;

    int freq = 0;
    for(auto &i: mp) freq = max(freq, i.second);

    cout << n - freq << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc; cin >> tc;
    while(tc--)
    solve();

    return 0;
}