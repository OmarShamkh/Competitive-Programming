#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 2e5+5;

int main()
{
    INGZzz
    int t = 1;
    // cin >> t;
    while(t--){
        int n,k;
        string s;
        cin >> n >> k >> s;
        ll a[n+1];
        bool valid[26] = {0};
        for(int i=0; i<k; i++){
            char c;
            cin >> c;
            valid[c-'a'] = 1;
        }
        for(int i=0; i<n; i++){
            if(valid[s[i]-'a']) a[i] = 1;
            else a[i] = 0;
        }
        ll dp[n+1] , ans = 0;
        dp[0] = 0;
        for(int i=0; i<n; i++){
            if(a[i] == 0) dp[i+1] = 0;
            else dp[i+1] = dp[i] + 1;
            ans += dp[i+1];
        }
        cout << ans << "\n";
    }

    return 0;
}