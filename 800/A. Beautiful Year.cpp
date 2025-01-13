#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int year; cin >> year;
    while(true){
        year++;
        int a = year / 1000; // extrat first digit i.e. 2025 - 2
        int b = year / 100 % 10; // i.e. 2025 - 0
        int c = year / 10 % 10; // i.e. 2025 - 2
        int d = year % 10; // i.e. 2025 - 5

        if(a != b && a != c && a != d && b != c && b != d && c != d) break;
    }

    cout << year << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}