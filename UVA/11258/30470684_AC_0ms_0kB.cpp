#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
#define INGZzz  cin.tie(0);cin.sync_with_stdio(0);
const int N = 510;
string s;
ll mem[N];
ll limt = (1 << 31) - 1;
ll solve(int idx){
    if(idx == s.size()) return 0;
    ll num =0;
    ll &ret = mem[idx];
    if(~ret) return ret;
    ret = 0;
    for(int i=idx; i<s.size(); i++){
        num = num*10 + s[i]-'0';
        if(num > limt) break;
        ret = max(ret , solve(i+1) + num);
    }
    return ret;
}
int main()
{
    INGZzz
    int t;
    cin >> t;
    while(t--){
        memset(mem, -1, sizeof mem);
        cin >> s;
        cout << solve(0) << "\n";
    }
    return 0;
}