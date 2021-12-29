#include <stdio.h>

int main() {
    int t, n, a, b, c;

    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        for(a = 0; (a + 1) * (a + 1) <= n; a++);
        for(b = 0; (b + 1) * (b + 1) * (b + 1)  <= n; b++);
        for(c = 0; (c + 1) * (c + 1) * (c + 1) * (c + 1) * (c + 1) * (c + 1) <= n; c++);
        printf("%d\n", a + b - c);
    }

    return 0;
}