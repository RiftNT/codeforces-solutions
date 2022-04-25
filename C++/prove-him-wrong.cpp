#include <bits/stdc++.h>
using namespace std;

int t, n;
void solveTestCase() {
    cin >> n;
    if(n > 19) cout << "NO";
    else {
        for(int i = 1, j = 1; i <= n; i++, j *= 3)
            cout << j << ' ';
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for(cin >> t; t--; cout << endl)
        solveTestCase();

    return 0;
}