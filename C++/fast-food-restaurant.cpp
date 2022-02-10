#include <bits/stdc++.h>
using namespace std;

int t, a[3];
void solveTestCase() {
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a+2);
    int z = 0;

    for(int i = 0; i < 3; i++)
        if(a[i]) z++, a[i]--;
    if(a[2] && a[1]) z++, a[2]--, a[1]--;
    if(a[0] && a[2]) z++, a[0]--, a[2]--;
    if(a[0] && a[1]) z++, a[0]--, a[1]--;
    if(a[0] && a[1] && a[2]) z++;
    
    cout << z;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    for(cin >> t; t--; cout << endl) 
        solveTestCase();

    return 0;
}