#include <bits/stdc++.h>
using namespace std;

int n;
void solve() {
    cin >> n;
    string s = "aabb";
    for(int i = 0; i < n; i++)
        cout << s[i%4];
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}