#include <stdio.h>
#include <string.h>

int main() {
    int t;
    char s[100];

    scanf("%d", &t);
    
    while(t--) {
        *s = '\0';
        scanf("%s", s);
        
        if(strlen(s) % 2 == 0) {
            strncmp(s, s + strlen(s) / 2, strlen(s) / 2) == 0 ? puts("YES") : puts("NO");
        } else {
            puts("NO");
        }

    }

    return 0;
}