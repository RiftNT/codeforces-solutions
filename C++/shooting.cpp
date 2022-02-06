#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, a = 0; cin >> n;
    pair<int, int> c[n];
    for(int i = 0; i < n; i++) cin >> c[i].first, c[i].second = i + 1;
    sort(c, c + n);
    for(int i = 0; i < n; i++) a += c[i].first * (n - i - 1) + 1;
    cout << a << "\n";
    for(int i = n - 1; i >= 0; i--) cout << c[i].second << " ";
}

int main() {
    solve();
    return 0;
}