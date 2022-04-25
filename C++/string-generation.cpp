#include <bits/stdc++.h>
using namespace std;

int t, n, k, c;
int solveTestCase() {
    cin >> n >> k;
    for(int i = c = 0; i < n; i++) {
        for(int j = 0; j < k && c < n; j++) cout << 'a', c++;
        for(int j = 0; j < k && c < n; j++) cout << 'b', c++;
        for(int j = 0; j < k && c < n; j++) cout << 'c', c++;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for(cin >> t; t--; cout << endl)
        solveTestCase();

    return 0;
}