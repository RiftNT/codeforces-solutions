#include <stdio.h>

int main() {
    int n, a, b, c = 0, m = 0;
    
    scanf("%d", &n);

    while(n--) {
        scanf("%d %d", &a, &b);
        c = c + b - a;
        if(c > m) m = c;
    }

    printf("%d", m);
    
    return 0;
}