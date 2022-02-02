#include <stdio.h>

int main() {
    int n, c = 0;

    scanf("%d", &n);
    int z[n];

    for(int i = 1; i <= n; i++) scanf("%d", &z[i]);
    for(int i = 1; i <= n; i++) {
            if(z[z[z[i]]] == i) c = 1;
    }

    printf(c ? "YES" : "NO");

    return 0;
}