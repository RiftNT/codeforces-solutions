#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n; cin >> n;
    string s = "989";
    if(n > 3) {
        cout << s;
        for(ll i = 0; i < n - 3; i++)
            cout << i % 10;
    } 
    else cout << s.substr(0, n);
}

int main() {
    int t;
    for(cin >> t; t--; cout << endl)
        solve();
    return 0;
}