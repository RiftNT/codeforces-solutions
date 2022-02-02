#include <stdio.h>
 
int main() {
    long long n, k;
 
    scanf("%lld%lld", &n, &k);
    printf(n / k % 2 ? "YES" : "NO");
 
    return 0;
}