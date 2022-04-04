#include <bits/stdc++.h>
using namespace std;

int t, n, b = 1, a[300001];
bool f = 1;
void solveTestCase() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] != a[0]) f = 0;
        if(a[i] > a[b]) b = i;
    }
    
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for(cin >> t; t--; cout << endl)
        solveTestCase();

    return 0;
}