#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
#define INGZzz  cin.tie(0);cin.sync_with_stdio(0);
const int N = 20;
ll x,y, n,k,m ,a[N],c[N][N] , mem[N][1 << N];
ll solve(int prev , int msk , int eaten){
    if(eaten == m) return 0;
    ll &ret = mem[prev][msk];
    if(~ret) return ret;
    //ret = 0;
    for(int i=1; i<=n; i++){
        if((msk & (1 << i)) == 0){
            ret = max(ret , solve(i , (msk | (1<<i)) , eaten+1) + a[i] + c[prev][i]);
        }
    }
    return ret;
}
int main()
{
    INGZzz
    memset(mem, -1, sizeof mem);
    cin >> n >> m >> k;
    for(int i=1; i<=n; i++) cin >> a[i];
    for(int i=1; i<=k; i++){
        cin >> x >> y;
        cin >> c[x][y];
    }
    cout << solve(0,0,0) << "\n";
    return 0;
}