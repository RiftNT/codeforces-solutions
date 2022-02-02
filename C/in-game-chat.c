#include <stdio.h>

int main() {
    int t, n;
    char s[100];

    scanf("%d", &t);
    while(t--) {
        scanf("%d%s", &n, s);
        int z = 0;
        int i = n - 1;
        for(; s[i] != '\0'; i--, z++) {
            if(s[i] != ')') break; 
        }
        puts(z > i + 1 ? "Yes" : "No"); 
    }
    
    return 0;
}