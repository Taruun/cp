#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n; cin >> n;
    vector<int>arr;
    int multi = 1;

    while(n > 0){
        int digit = n % 10;
        if(digit != 0)arr.push_back(digit * multi);
        n /= 10;
        multi *= 10;
    }

    cout << arr.size() << endl;
    for(auto &it: arr) cout << it << " ";
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc; cin >> tc; 
    while(tc--)    solve();
    return 0;
}