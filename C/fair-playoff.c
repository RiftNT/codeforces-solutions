#include <stdio.h>

int main() {
    int t, s1, s2, s3, s4;

    scanf("%d", &t);

    while(t--) {
        scanf("%d%d%d%d", &s1, &s2, &s3, &s4);
        printf(((s1 > s3 || s1 > s4) || (s2 > s3 || s2 > s4)) && ((s3 > s1 || s3 > s2) || (s4 > s1 || s4 > s2)) ? "YES\n" : "NO\n");
    }
    return 0; 
}