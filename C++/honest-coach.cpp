#include <bits/stdc++.h>
using namespace std;

int t, n, s[51];
void solveTestCases() {
    int a = 999999;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> s[i];

    sort(s, s + n);

    for(int i = 0; i < n - 1; i++)
        a = min(a, s[i+1] - s[i]);

    cout << a;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for(cin >> t; t--; cout << endl)
        solveTestCases();

    return 0;
}