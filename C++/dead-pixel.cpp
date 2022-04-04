#include <bits/stdc++.h>
using namespace std;

int t, a, b, x, y;
int solveTestCases() {
    cin >> a >> b >> x >> y;
    cout << max(max(x, a - 1 - x) * b, a * max(y, b - 1 - y));        
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

for(cin >> t; t--; cout << endl) 
    solveTestCases();

return 0;
}