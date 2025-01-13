#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n; cin >> n;
    double sum = 0;
    vector<int>arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        sum+=arr[i];
    }
    cout << fixed << setprecision(12)<<  sum/n << endl; // fix 12 digits after the decimal

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}