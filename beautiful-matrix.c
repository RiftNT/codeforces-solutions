#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[5][5], i, j;

    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            scanf("%d", &a[i][j]);
            if(a[i][j]) {
                printf("%d", abs(2 - i) + abs(2 - j));
                return 0;
            }
        }
    }
}