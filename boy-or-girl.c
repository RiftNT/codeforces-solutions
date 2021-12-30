#include <stdio.h>

int main() {
    char s[500];
    int i, n, a[26] = {0}; 

    scanf("%s", s);

    for(i = 0; s[i]; i++) {
        a['z' - s[i]] = 1;
    }

    for(i = n = 0; i < 26; i++) {
        n += a[i];
    }
    
    n % 2 ? printf("IGNORE HIM!") : printf("CHAT WITH HER!");
    
    return 0;
}