#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, k, i, passing, *scores;
    
    scanf("%d %d", &n, &k);

    scores = (int*)malloc(sizeof(int) * n);
    
    for(i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
        if(i == k-1) {
            passing = scores[i];
        }
    }

    for(i = 0; i < n && scores[i] >= passing && scores[i] != 0; i++){}

    printf("%d", i);

    return 0;
}