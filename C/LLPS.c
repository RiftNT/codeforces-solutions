#include <stdio.h>
#include <string.h>

int main() {
    char s[11], c = 'Z';
    int r;

    scanf("%s", s);
    for(int i = 0; i < strlen(s); i++) {
        if(s[i] > c) c = s[i], r = 1;
        else if(c == s[i]) r++;
    }
    while(r--) printf("%c", c);

    return 0;
}