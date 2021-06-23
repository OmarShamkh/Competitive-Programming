#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
#define INGZzz  cin.tie(0);cin.sync_with_stdio(0);
const int N = 110;
int t,n,m , sw[N] , dp[N][1<<15];
int solve(int idx, int msk){
    if(idx == m) return (msk == 0 ? 0 : 1e9);

    int &ret = dp[idx][msk];
    if(~ret) return ret;

    return ret = min( 1 + solve(idx+1 , msk ^ sw[idx]) , solve(idx+1 , msk));

}
int main()
{
    INGZzz
    cin >> t;
    for(int tc=1; tc<=t; tc++){
        memset(dp,-1,sizeof dp);
        memset(sw, 0, sizeof sw);
        cin >> n >> m;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                int k;
                cin >> k;
                if(k){
                    sw[i] |= (1 << (n-j-1)); // make arr [0 , 1] = 01 binary
                }
            }
        }
        
        int ans = solve(0, (1 << n) -1);
        if(ans == 1e9 ) cout << "Case " << tc << ": IMPOSSIBLE\n";
        else cout << "Case " << tc << ": " << ans << "\n";
    }
    
    return 0;
}