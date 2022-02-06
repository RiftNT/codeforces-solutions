#include <bits/stdc++.h>
using namespace std;

char z['r'];
int a;

void solve() {
    char c;
    
    z['Q'] = 9;           z['q'] = -9;
    z['R'] = 5;           z['r'] = -5;
    z['B'] = z['N'] = 3;  z['b'] = z['n'] = -3;
    z['P'] = 1;           z['p'] = -1;
    
    for(int i = 0; i < 64; i++) cin >> c, a += z[c];
    cout << (a != 0 ? a > 0 ? "White" : "Black" : "Draw");
}
int main() {
    solve();
    return 0;
}
