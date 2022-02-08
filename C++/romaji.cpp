#include <bits/stdc++.h>
using namespace std;

string s;
int z = 1;
bool b(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'n';
}

void solve() {
    cin >> s; 
    for(int i = 0; s[i]; i++) 
        if(!b(s[i]) && (!b(s[i+1]) || s[i+1] == 'n')) z = 0;
    cout << (z ? "YES" : "NO");
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    
    return 0;
}