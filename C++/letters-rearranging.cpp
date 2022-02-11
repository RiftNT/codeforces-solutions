#include <bits/stdc++.h>
using namespace std;

int t;
char s[1001];

void solve() {
    cin >> s;
    int n = (int)strlen(s);
    sort(s, s + n);
    cout << (s[0] == s[n-1] ? "-1" : s);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for(cin >> t; t--; cout << endl)
        solve();

    return 0;
}