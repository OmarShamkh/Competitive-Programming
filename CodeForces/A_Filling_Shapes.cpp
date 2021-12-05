#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5;

int main()
{
    INGZzz
    
    int t = 1;
    // cin >> t;
    while(t--){
        int n;
        cin >> n;
        int dp[n+1];
        dp[0] = 1;
        dp[1] = 0;
        for(int i=2; i<=n; i++) dp[i] = 2*dp[i-2];
        cout << dp[n] << "\n";
        // cout << (n&1 ? 0 : (1<<(n/2)));
    }

    return 0;
}