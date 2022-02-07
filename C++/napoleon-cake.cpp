#include <bits/stdc++.h>
using namespace std;

void solve()  {
    int n, b; cin >> n;
    int c[n], a[n] = {0};
    for(int i = 0; i < n; i++) cin >> c[i];
    for(int i = b = n - 1; i >= 0; i--) {
        b = min(i - c[i], b);
        if(b < i) a[i] = 1;
    }
    for(int i = 0; i < n; i++) cout << a[i] << " ";
}

int main() {
    int t;
    for(cin >> t; t--; cout << endl)
        solve();
    return 0;
}