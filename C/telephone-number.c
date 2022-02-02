#include <stdio.h>
#include <string.h>

void solve() {
    int t, n;
    char s[101];

    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        scanf("%s", s);
        while(n >= 11 && s[strlen(s) - n] != '8') n--;
        puts(n >= 11 ? "YES" : "NO");
    }
}

int main() {
    solve();
    return 0;
}