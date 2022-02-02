#include <stdio.h>

int main() {
    int x1, x2, y1, y2, x, y;

    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    x = x1 > x2 ? x1 - x2 : x2 - x1;
    y = y1 > y2 ? y1 - y2 : y2 - y1;
    printf("%d", x > y ? x : y);

    return 0;
    
}