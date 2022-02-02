#include <stdio.h>
 
int main() {
    int n, t, i;
    char s[50];

    scanf("%d %d", &n, &t);
    scanf("%s", s);

    while(t--) {
        for(i = 0; s[i]; i++) {
            if(s[i] == 'G' && s[i-1] == 'B' && i) {
                s[i-1] = 'G';
                s[i] = 'B';
                i++;
            }    
        }   
    }   
            
    printf("%s", s);

    return 0;
}