// check the friend_height > fence_height then it will bend and take 2 width
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n, fence_height; cin >> n >> fence_height;
    int count = 0;
    for(int i = 0; i < n; i++){
        int friend_height; cin >> friend_height;
        if(friend_height > fence_height) count+=2;
        else count+=1;
    }

    cout << count << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}