#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n, m; cin >> n >> m;

    for(int i = 0; i <n; i++){
        if(i % 2 == 0){
            for(int j = 0; j < m; j++) cout << "#";
            cout << endl;
        }
        else{
            if(i % 4 == 1){
                for(int j = 0; j < m - 1; j++) cout << "#";
                cout << ".";
            }
            else{
                for(int j = 0; j < m - 1; j++) cout << ".";
                cout << "#";
            }
        }
        cout << endl;

    } 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}