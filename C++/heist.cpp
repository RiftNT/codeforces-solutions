#include<bits/stdc++.h>
using namespace std;

int n, a[1001];
void solve() {
    cin >> n;

    for(int i = 0; i < n; i++) 
        cin >> a[i];
    sort(a, a + n);
    cout << a[n-1] - (a[0] + n - 1);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}