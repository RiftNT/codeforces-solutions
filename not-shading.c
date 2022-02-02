#include <stdio.h>

int main() {
    int t, n, m, r, c;

    scanf("%d", &t);
    while(t--) {
        scanf("%d%d%d%d", &n, &m, &r, &c);
        r--; c--;
        char s[n][m];
        int i, j, b = 0;

        for(i = 0; i < n; i++) scanf("%s", s[i]);
        
        int z = s[r][c] == 'B' ? 0 : 1;

        for(i = 0; i < n && z; i++) {
            if(s[i][c] == 'B') { z = 1; break; }
            for(j = 0; j < m; j++) {
                if(s[i][j] == 'B') b++;

                if(s[r][j] == 'B') { z = 1; break; }
                else if(b) z = 2;
                else if(!b) z = -1;
            }
        }
        printf("%d\n", z);
    }

    return 0;
}