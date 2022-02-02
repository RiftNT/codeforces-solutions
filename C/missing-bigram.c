// UNSOLVED
#include <stdio.h>
#include <string.h>

int main() {
    int t, n, i, stop;
    char s[1000];

    scanf("%d", &t);        //input: ab bb ba aa ba
    while(t--) {            //print: abbbaaa
        scanf("%d ", &n);   //exptd: abbaaba
        gets(s);     //i = 10, stop = 8, n = 7
        printf("%c", s[0]); // 0 1 - 3 4 - 6 7 - 9 10 - 12 13
        for(i = 1, stop = 4; stop <= n; stop += 2, i += 3) {
            // if(s[i - 1] == s[i]) {
            //     printf("%c%c", s[i], s[i + 3]);
            //     i += 3;
            // } 
            if(s[i] == s[i + 2] && s[i] == s[i + 3] && s[i] == s[i + 5]) {
                printf("%c%c", s[i], s[i]);
                i += 3;
                stop += 2;
            }
            if(s[i] == s[i + 2] && s[i] == s[i + 3]) {
                printf("%c%c", s[i], s[i + 2]);
            }
            else if(s[i] == s[i + 2]) {
                printf("%c%c", s[i], s[i + 3]);        
            } else {
                printf("%c%c", s[i], s[i + 2]);
            }
        }
        printf("%c%c", s[i + 5], s[i + 6]);
        printf("\n");
    }
    
    return 0;
}