#include <stdio.h>

int main() {
    int n, k, i, a[50];
    
    scanf("%d %d", &n, &k);
    for(i = 0; i < n; i++) {scanf("%d", &a[i]);}
    for(i = 0; a[i] && a[i] >= a[k-1] && i < n; i++){}
    printf("%d", i);
    
    return 0;
}