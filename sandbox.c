#include <stdio.h>

int main() {
    int t;
    char* s;
    scanf("%d", &t);
    while(t--) {
        scanf("%s", s);
        printf("%s\n", s);
    }
    return 0;
}