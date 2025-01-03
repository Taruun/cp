#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
  int n; cin >> n;
  vector<int>arr(n);
  for(auto &it:arr) cin >> it;

  vector<int>prefix(n);
  prefix[0] = arr[0]; // starting prefix with first idx
  for(int i = 1; i < n; i++){
      prefix[i] = prefix[i - 1] + arr[i];
  }

  int query = 0;
  while(query--){
    int l, r; cin >> l >> r;
    cout << prefix[r] - ((l == 0) ? 0 : prefix[l - 1]) << " ";
  }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}