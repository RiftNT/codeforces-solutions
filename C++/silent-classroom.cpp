#include<bits/stdc++.h>
using namespace std;

int a[30],ans,n;
string s;

void solve() {
    cin>>n;
    while(n--) {
        cin>>s;   
        ans += a[s[0]-'a']++/2;
    }
    cout << ans;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}