#include <bits/stdc++.h>
using namespace std;

int n;
string a;
void solve() {
    cin >> n >> a;
    for(int i = 1, j = (n % 2 ? n / 2 : n / 2 - 1); i <= n; i++) {
        cout << a[j];
        j = (n % 2 ? (i % 2 ? j - i : j + i) : (i % 2 ? j + i : j - i)); 
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}