#include <bits/stdc++.h>
using namespace std;

int t, n;
string a, b;
void solveTestCase() {
    cin >> n >> a >> b;
    int ans = 0;
    for(int i = 0; i < n; i++) {
        if(b[i] == '1') {
            if(a[i] == '0') ans++;
            else if(a[i-1] == '1') a[i-1] = 0, ans++;
            else if(a[i+1] == '1') a[i+1] = 0, ans++;
        }
    }
    cout << ans;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for(cin >> t; t--; cout << endl)
        solveTestCase();

    return 0;
}