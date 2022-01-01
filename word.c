#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, a;

    scanf("%s", s);
    
    for(i = a = 0; s[i]; i++) 
        if(s[i] >= 'a') a++;
    printf("%s", a >= (float)strlen(s) / 2 ? strlwr(s) : strupr(s));

    return 0;
}