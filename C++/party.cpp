#include <bits/stdc++.h>
using namespace std;

int t, n, e[2001], b, m, x =1;

void solve() {
    cin >> n;
    for(int i = 0; i < n; i++) cin >> e[i];
    for(int i = 0; i < n; i++) {
        b = e[i];
        m = 1;
        while(b != -1) {
            b = e[b-1];
            m++;
        }
        x = max(m, x);
    }
    cout << x;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}