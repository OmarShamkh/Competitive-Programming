#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
#define INGZzz  cin.tie(0);cin.sync_with_stdio(0);
const int N = 2e5+10;
int n, a[N] , mem[N][2];

int solve(int idx, int flag){
    if(idx == n) return 0;
    int &ret = mem[idx][flag];
    if(~ret) return ret;
    ret = 1;
    if(a[idx+1] > a[idx]){
        ret = max(ret, solve(idx+1 , flag) +1);
    }
    if(a[idx+2] > a[idx] && !flag){
        ret = max(ret , solve(idx+2 ,1) +1);
    }
    return ret;
}
int main()
{
    INGZzz
    memset(mem,-1,sizeof mem);
    cin >> n;
    for(int i=0; i<n; i++) cin >> a[i];
    int ans =1;
    for(int i=0; i<n; i++) ans = max(ans , solve(i,0));
    cout << ans <<"\n";
    return 0;
}