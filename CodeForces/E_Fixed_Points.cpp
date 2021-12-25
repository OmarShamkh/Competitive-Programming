#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INGZzz  	cin.tie(0);cin.sync_with_stdio(0);
const int N = 2010;
int n, k, a[N], dp[N][N];

int solve(int idx, int moves){

    if(idx == 0) return 0;
    if(idx <0 || moves < 0) return -1e9;
    int &ret = dp[idx][moves];
    if(~ret) return ret;
    int del = solve(idx-1 , moves-1);
    int leave = solve(idx-1 , moves) + (a[idx] == idx -moves);
    return ret = max(del, leave);
}
int main()
{
    INGZzz
            
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i=1; i<=n; i++) cin >> a[i];
        for(int i=0; i<=n; i++){
            for(int j=0; j<=n; j++){
                dp[i][j] = -1;
            }
        }
        int ans = -1;
        for(int i=0; i<=n; i++){
            if(solve(n,i) >= k){
                ans = i;
                break;
            }
        }
        cout << ans << "\n";
    }
    
    return 0;
}