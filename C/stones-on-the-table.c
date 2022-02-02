#include <stdio.h>

int main() {
    int n, a = 0;
    char s[50];

    scanf("%d", &n);
    scanf("%s", s);

    while(n--) {
        if(s[n] == s[n+1]) {
            a++;
        }
    }
    printf("%d", a);
    return 0;
}