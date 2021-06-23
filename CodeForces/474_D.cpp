#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
#define INGZzz  cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5+10 , M = 1e9+7;
int t,k , mem[N];
int dp(int len){
    if(len == 0) return 1;
    if(len < 0) return 0;
    int &ret = mem[len];
    if(~ret) return ret;
    ret = ( dp(len-1) + dp(len - k) ) % M;
    return ret;
}
int main()
{
    INGZzz
    memset(mem,-1,sizeof mem);
    cin >> t >> k;
    dp(1e5+1);
    for(int i=1; i<N; i++) mem[i] = (mem[i] + mem[i-1]) % M;
    while(t--){
        int a,b;
        cin >> a >> b;
        cout << (mem[b] - mem[a-1] + M ) % M << "\n";
    }
    return 0;
}