#include <stdio.h>

void swap(int*, int*);

int main() {
    int t, n, k, i, j, val, a[30], b[30];

    scanf("%d", &t);

    while(t--) {
        scanf("%d %d", &n, &k);

        for(i = 0; i < n; i++) scanf("%d", &a[i]);
        for(i = 0; i < n; i++) scanf("%d", &b[i]);

        for(i = 0; i < n - 1; i++) {
            for(j = i + 1; j < n; j++) {
                if(a[i] > a[j]) swap(&a[i], &a[j]); 
                if(b[i] < b[j]) swap(&b[i], &b[j]);
            }
        }
        for(i = val = 0; i < n; i++) {
            if(i < k && b[i] > a[i]) a[i] = b[i];
            val += a[i];
        }
        printf("%d\n", val);
    }
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}