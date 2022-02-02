#include <stdio.h>
#include <string.h>

int main() {
    int t, i, n;

    scanf("%d", &t);
    
    while(t--) {
        char s[50];
        n = 0;
        scanf("%s", s);
        for(i = 0; i < strlen(s); i++) {
            if(s[i] == 'N') n++;
        }
        n == 1 ? puts("NO") : puts("YES");
    }

    return 0;
}