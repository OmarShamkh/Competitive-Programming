#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
#define INGZzz  cin.tie(0);cin.sync_with_stdio(0);
const int N = 5e4+10 , M = 1e2+10;
int n,sum, m, dp[M][N] , a[M];
int solve(int idx, int cursum){
    if(idx == m) return abs(cursum - (sum - cursum));
    int &ret = dp[idx][cursum];
    if(~ret) return ret;
    ret = min(solve(idx+1 , cursum) , solve(idx+1 , cursum + a[idx]));
    return ret; 
}
int main()
{
    INGZzz
    cin >> n;
    while(n--){
        memset(dp,-1,sizeof dp);
        sum = 0;
        cin >> m;
        for(int i=0; i<m; i++){
            cin >> a[i];
            sum += a[i];
        }
        cout << solve(0,0) << "\n";
    }
    return 0;
}