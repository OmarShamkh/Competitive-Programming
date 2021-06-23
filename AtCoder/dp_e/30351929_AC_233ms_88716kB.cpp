#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
const int INF = 0x3f3f3f3f;
const int N = 1e2+9 , M = 1e5+9;
ll n,W , v[N] , w[N], mem[N][M];

ll dp(int idx, int val){
    if(val <= 0) return 0;
    if(idx == n) return INF;
    ll &ret = mem[idx][val];
    if(~ret) return ret;
    ret = INF;
    ret = min(dp(idx+1, val-v[idx])+w[idx], dp(idx+1 , val));
    return ret;
}
int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    memset(mem, -1, sizeof mem);
    cin >> n >> W;
    for(int i=0; i<n; i++){
        cin >> w[i] >> v[i];
    }
    int max_Val = 1e5;
    for(int i=max_Val; i>=0; i--){
        if(dp(0,i) <= W){
            return cout << i << "\n",0;
        }
    }
    return 0;
}