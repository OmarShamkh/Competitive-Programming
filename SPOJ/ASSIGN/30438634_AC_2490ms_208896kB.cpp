#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
#define INGZzz  cin.tie(0);cin.sync_with_stdio(0);
const int N = 20;
ll t , n, a[N+5][N+5] , mem[N+5][1<<N];
ll solve(int idx, int msk){
    if(idx == n) return 1;
    
    ll &ret = mem[idx][msk];
    if(~ret) return ret;
    ret = 0;
    for(int i=0; i<n; i++){
        if(a[idx][i] && (msk & (1 << i)) == 0){
            ret += solve(idx+1 , msk | (1 << i));
        }
    }
    return ret;
}
int main()
{
    INGZzz
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin >> a[i][j];
            }
        }
        memset(mem, -1, sizeof mem);
        cout << solve(0,0) << "\n";
    }
    return 0;
}