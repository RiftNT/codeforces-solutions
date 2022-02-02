#include <stdio.h>
#include <string.h>

int main() {
    char a[102];
    int i, j, n, tmp;

    scanf("%s", a);

    n = strlen(a);

    for(i = 0; i < n ; i += 2 ) {
        for(j = i + 2; j < n; j += 2) {
            if(a[i] > a[j]) {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }  
    }

    printf("%s", a);
    
    return 0;
}
