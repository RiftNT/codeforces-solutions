#include <bits/stdc++.h>
using namespace std;

int n, a[51][51], z;
int solve() {
    cin >> n;
    for(int i = 0; i < n; i++) 
        for(int j = 0; j < n; j++) 
            cin >> a[i][j];
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(a[i][j] != 1) {
                z = 0;
                for(int x = 0; x < n; x++) 
                    for(int y = 0; y < n; y++) 
                        if(a[i][j] == a[i][y] + a[x][j]) z = 1;
                if(!z) {
                    cout << "No";
                    return 0;
                }
            }
        }
    }
    cout << "Yes";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}