#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, z, a = 0, b = 0; cin >> n;
    while(n--) cin >> z, z % 2 ? a++ : b++;
    cout << (a % 2 ? a : b);
}

int main() {
    solve();
    return 0;
}