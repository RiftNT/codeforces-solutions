// #include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

// int main() {
//     int t;

//     scanf("%d", &t);
//     while(t--) {
//         int n, c = 0;
//         scanf("%d", &n);
//         char s[n];
//         scanf("%s", s);
//         if(n < 11) puts("NO");
//         else {
//             for(int i = 0; i <= n - 11; i++) 
//                 if(s[i] == '8') { puts("YES"); c = 1; break; }
//             if(!c) puts("NO");
//         }
//     }

//     return 0;
// }
void solve() {
    int n, t; cin >> t;
    string s;
    
    while(t--) {
        cin >> n >> s;
        while(n >= 11 && s[s.length() - n] != '8') n--;
        cout << (n >= 11 ? "YES\n" : "NO\n");
    }
}

int main() {
    solve();
    return 0;
}