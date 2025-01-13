#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n; cin >> n;
    vector<pair<int, int>>tms(n);
    for(in i = 0; i < n; i++) cin >> tms[i].first >> tms[i].second;


    int count = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i != j && tms[i].first == tms[j].second) count++;
        }
    }

    // vector<int> first(n);
    // vector<int> second(n);
    
    // // Input into separate vectors
    // for(int i = 0; i < n; i++) {
    //     cin >> first[i] >> second[i];
    // }

    // int count = 0;
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n; j++){
    //         if(i != j && first[i] == second[j]) count++;
    //     }
    // }


    cout << count << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}