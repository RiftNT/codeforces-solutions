#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, h, n, m;
    for(cin >> t; t--; cout << endl) {
        cin >> h >> n >> m;
        while(n-- && h > 20) h = h / 2 + 10;
        cout << (h <= m * 10 ? "YES" : "NO");
    }

    return 0;
}