#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, d, a, b; a = b = 0;
    string s;
    cin >> n >> d >> s;

    while(a < n - 1 && b <= n) 
        s[a] == '1' ? b++, a += d : a--;
        
    cout << (b >= n ? -1 : b);
}

int main() {
    solve();
    return 0;
}