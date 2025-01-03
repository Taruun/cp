// Manhattan distance formula |x1 - x2| + |y1 - y2|
// current i - center point


#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int ans = 0;
    int n; 
    for(int i = 1; i <=5; i++){
        for(int j = 1; j <= 5; j++){
            cin >> n;
            if(n == 1)
                ans = abs(i - 3) + abs(j - 3);

        }
    }

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}