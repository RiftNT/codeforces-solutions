#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    string s;
    for(cin >> t; t--; cout << endl) {
        cin >> s; int x = 0, y = 0;
        for(auto c : s) c == '1' ? x++ : y++;
        cout << (min(x, y) % 2 ? "DA" : "NET");
    }

    return 0;
}