#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n, num = 0;
    char  a[4];
    scanf("%d\n", &n);
    while(n--) {
        gets(a);
        num += 44 - a[1];
    }
    printf("%d", num);

    return 0;
}