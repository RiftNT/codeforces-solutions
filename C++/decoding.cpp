#include <bits/stdc++.h>
using namespace std;

int n;
string a, b;
void solve() {
    cin >> n >> a;
    
    for(int i = 0; i < n; i++) 
        b = ((n - i) % 2 ? b + a[i] : a[i] + b);
    cout << b;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}

// logva -> [v][o][l][g][a]
//          [3][1][0][2][4] 
