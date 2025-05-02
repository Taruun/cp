#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n; cin >> n;
    string a, b; cin >> a >> b;

    int zerosArr1 = 0, zerosArr2 = 0;

    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            if(a[1] == '0') zerosArr1++;
            if(b[1] == '0') zerosArr2++;
        }else{
            if(a[1] == '0') zerosArr1++;
            if(b[1] == '0') zerosArr2++;

        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc; cin >> tc;
    while(tc--)    solve();
    return 0;
}

//Challenge:

//

//Observation:

//

//Analysis:

//