#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
using namespace std;
const int N = 105, OO = 0x3f3f3f3f, mod = 1e9 + 7;
string s[N];
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i=0; i<n-2; i++) cin >> s[i];
        int cnta =0 , cntb =0;
        string ans = "";
        for(int i=0; i+1<n-2; i++){
            ans += s[i][0];
            if(s[i][1] != s[i+1][0]) ans += s[i][1];
        }
        ans += s[n-3];
        cout << (ans.size() < n ? ans+'a' : ans) << "\n";
    }
    
    return 0;
}