#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
#define INGZzz  cin.tie(0);cin.sync_with_stdio(0);
const int N = 2e3 + 5 , M = 1e9 +7 ;
string a,b;
int m,d , dp[N][N][2][2];
int solve(int idx, int num, bool fa, bool fb){
    if(idx == a.size()) return (num == 0);
    int &ret = dp[idx][num][fa][fb];    
    if(~ret) return ret;
    ret =0;
    for(int i=0; i<10; i++){
        if((idx%2==0 &&  i==d) || (idx%2==1 &&  i!=d)) continue;
        if((!fa && i < a[idx]-'0')|| (!fb &&  i > b[idx]-'0')) continue;
        bool newfa = (fa || i > a[idx]-'0');
        bool newfb = (fb || i < b[idx]-'0');
        ret = (ret + solve(idx+1 , (num*10+ i)% m, newfa , newfb))%M;
    }
    return ret;
}
int main()
{
    INGZzz
    memset(dp, -1, sizeof dp);
    cin >> m >> d;
    cin >> a >> b;
    cout << solve(0,0,0,0) << "\n";
    return 0;
}