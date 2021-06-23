#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define loop(n)          for(int i = 0; i < (n); i++)
#define lp(x, s, e)      for(int x = (s); x < (e); x++)
#define lpe(x, s, e)     for(int x = (s); x <= (e); x++)
#define INGZzz  cin.tie(0);cin.sync_with_stdio(0);
const int N = 1e3+10;
pair<int, string> mem[N][N];
string s , tmp;
int n;
pair<int, string> maxpair(pair<int,string> a, pair<int,string> b){
    if(a.first > b.first) return a;
    if(b.first > a.first) return b;
    if(a.second < b.second) return a;
    return b;
}
pair<int,string> dp(int st, int en){
    if(st == en) return make_pair(1 , tmp = s[st]);
    if(st > en) return make_pair(0,"");
    auto &ret = mem[st][en];
    if(~ret.first) return ret;
    if(s[st] == s[en]){
        ret.first = 2 + dp(st+1 , en-1).first;
        ret.second = s[st] + dp(st+1 , en-1).second + s[en];
        return ret;
    }
    return ret = maxpair(dp(st+1,en) , dp(st,en-1));
}

int main()
{
    INGZzz
    while(cin >> s){
        n = s.size();
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                mem[i][j].first = -1;
            }
        }
        cout << dp(0,n-1).second<<"\n";
    }
    
    return 0;
}