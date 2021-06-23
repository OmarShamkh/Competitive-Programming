#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
#define INGZzz  cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e5;
vector<int> v;
ll a,b,mem[10][110][2];
ll dp(int idx, int sum_digits, int flag){
    if(idx == v.size()){
        return sum_digits;
    }
    ll &ret = mem[idx][sum_digits][flag];
    if(~ret) return ret;
    int limt = v[idx];
    ret = 0;
    if(flag) limt = 9;
    for(int i=0; i<=limt; i++){
        int newflag = flag;
        if(i < limt && !flag) newflag = 1;
        ret += dp(idx+1 , sum_digits + i , newflag);
    }
    return ret;

}
ll solve(int n){
    v.clear();
    while(n > 0){
        v.push_back(n%10);
        n /= 10;
    }
    reverse(v.begin() , v.end());
    memset(mem, -1, sizeof mem);
    return dp(0,0,0);
}
int main()
{
    INGZzz
    while(true){
        cin >> a >> b;
        if(a == -1 && b == -1) break;
        cout << solve(b) - solve(a-1) <<"\n";
    }
    return 0;
}