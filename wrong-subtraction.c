#include <stdio.h>

int main() {
    int n, k;

    scanf("%d %d", &n, &k);

    while(k--)
        n = n % 10 ? n - 1 : n / 10;
    
    printf("%d", n);
    
    return 0;
}