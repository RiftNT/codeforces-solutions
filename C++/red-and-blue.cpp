#include <bits/stdc++.h>
using namespace std;

int t, n, a;
int getSeqMax() {
    cin >> n;
    int s = 0, ms = 0;
    while(n--) {
        cin >> a;
        s += a;
        ms = max(ms, s);
    }
    return ms;
}
void solveTestCase() {
    int r = getSeqMax();
    int b = getSeqMax();

    cout << r + b;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for(cin >> t; t--; cout << endl) 
        solveTestCase();

    return 0;
}