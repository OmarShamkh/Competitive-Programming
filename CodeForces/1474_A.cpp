#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        string s , ans="";
        cin >> n >> s;//011
        int prev = 0;
        for(int i=0; i<n; i++){
            if(1+ s[i]-'0' != prev){
                ans +='1';
                prev = 1+s[i]-'0';
            }
            else{
                ans +='0';
                prev = 0+s[i]-'0';
            }
        }
        cout << ans << "\n";
    }
    return 0;
}