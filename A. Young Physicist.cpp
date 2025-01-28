#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n; cin >> n;
    int sum_x = 0 sum_y = 0, sum_z = 0;
    int x, y, z;

    for(int i = 0; i < n; i++){
        cin >> x >> y >> z;

        sum_x+=x;
        sum_y+=y;
        sum_z+=z;
    }

    if(sum_x == 0 || sum_y == 0 || sum_z == 0) cout << "YES";  
    else cout << "NO"
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}

//Challenge:

// How to calculate sum which was straightforward

//Observation:

// Thinking of sum of natural numbers formula but straightforward

//Analysis:

// Just need to add given x y z into sum_x sum_y and sum_z