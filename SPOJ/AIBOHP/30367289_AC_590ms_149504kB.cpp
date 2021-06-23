#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
#define INGZzz  cin.tie(0);cin.sync_with_stdio(0);
const int N = 6100;
string s;
int n , mem[N][N];
int dp(int st, int en){
    if(st >= en) return 0;
    int &ret = mem[st][en];
    if(~ret) return ret;
    if(s[st] == s[en]) return ret = dp(st+1 , en -1);
    return ret = min(dp(st, en-1) , dp(st+1, en)) + 1;
}
int main()
{
    INGZzz
    cin >> n;
    while(n--){
        memset(mem , -1, sizeof mem);
        cin >> s;
        cout << dp(0,s.size()-1) << "\n";
    }
    return 0;
}